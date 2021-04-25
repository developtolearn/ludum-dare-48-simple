#pragma once


int parse_command(string command, unordered_map<string, unordered_set<string>> phrases) {
	// trim leading and trailing spaces
	string delim = " ";
	command = command.erase(0, command.find_first_not_of(delim));
	command = command.substr(0, command.find_last_not_of(delim)+1);
	
	// check for special strings
	if (command == "" || command == "EXIT") {
		return 0;
	}
	else if (command == "HELP") {
		help();
		return 0;
	}
	else if (command == "LIST VERBS") {
		print_phrases(phrases);
		return 0;
	}

	// parse verb and noun if correct syntax used
	string user_verb, user_noun;
	user_verb = command.substr(0, command.find(delim));
	string leftover = command.substr(user_verb.length(), command.length());
	user_noun = leftover.erase(0, leftover.find_first_not_of(delim));
	
	// check for valid verb
	if (phrases.find(user_verb) == phrases.end()) {
		cout << "don't know how to " << user_verb << "\n";
		return 0;
	}

	// check for valid noun
	if (phrases[user_verb].find(user_noun) == phrases[user_verb].end()) {
		cout << "don't know how to " << user_verb << " " << user_noun << "\n";
		return 0;
	}

	return 0;
}