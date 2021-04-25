#pragma once


map<string, string> gen_player() {
	map<string, string> player;
	
	// player name
	cout << "Please enter your character's name\n>>> ";
	string name;
	getline(cin, name);
	player["name"] = name;

	return player;
}

