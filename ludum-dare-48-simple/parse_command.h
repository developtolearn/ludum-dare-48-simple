#pragma once


int parse_command(string command, unordered_map<string, unordered_set<string>> phrases) {
	// check for special strings
	if (command == "EXIT") {
		return 0;
	}
	else if (command == "HELP") {
		help();
	}
	
	// parse verb and noun if correct syntax used

	
	// check for valid verb


	// check for valid noun

	return 0;
}