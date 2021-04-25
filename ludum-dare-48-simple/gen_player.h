#pragma once


map<string, string> gen_player() {
	map<string, string> player;
	
	// player name
	cout << "Please enter your character's name\n>>> ";
	string name;
	cin >> name;
	player["name"] = name;
	cout << "Hello, " << name << "\n";

	return player;
}

