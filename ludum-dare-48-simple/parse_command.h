#pragma once


array<array<string, 10>, 10> parse_command(string command, unordered_map<string, unordered_set<string>> phrases, array<array<string, 10>, 10> map) {
	// trim leading and trailing spaces
	string delim = " ";
	command = command.erase(0, command.find_first_not_of(delim));
	command = command.substr(0, command.find_last_not_of(delim)+1);
	
	// check for special strings
	if (command == "" || command == "EXIT") {
		return map;
	}
	else if (command == "HELP") {
		help();
		return map;
	}
	else if (command == "LIST VERBS") {
		print_verbs(phrases);
		return map;
	}
	else if (command == "LIST ALL") {
		print_phrases(phrases);
		return map;
	}

	// parse verb and noun
	string user_verb, user_noun;
	user_verb = command.substr(0, command.find(delim));
	string leftover = command.substr(user_verb.length(), command.length());
	user_noun = leftover.erase(0, leftover.find_first_not_of(delim));
	
	// check for valid verb
	if (phrases.find(user_verb) == phrases.end()) {
		cout << "don't know how to \"" << user_verb << "\"\n";
		return map;
	}

	// check for valid noun
	if (phrases[user_verb].find(user_noun) == phrases[user_verb].end()) {
		cout << "don't know how to \"" << user_verb << "\" \"" << user_noun << "\"\n";
		return map;
	}

	// check for "ACCESS"
	unordered_map<string, unordered_set<string>> thesaurus = gen_thesaurus();
	if (thesaurus["ACCESS"].find(user_verb) != thesaurus["ACCESS"].end()) {
		if (user_noun == "MAP") { print_map(map); }
		if (user_noun == "PLAYER") { print_player(); }
		return map;
	}
	// check for "MOVE"
	if (thesaurus["MOVE"].find(user_verb) != thesaurus["MOVE"].end()) {
		map = move_player(map, user_noun);
		return map;
	}

	return map;
}