#pragma once


map<string, string> gen_player() {
	//player name
	map<string, string> player;
	cout << "Please enter your character's name\n>>> ";
	string name;
	getline(cin, name);
	player["name"] = name;

	// initialize random engine
	random_device rd;
	mt19937 gen(rd());

	// roll random stats
	uniform_int_distribution<> health(25, 50);
	g_player_health = health(gen);
	uniform_int_distribution<> attack(1, 5);
	g_player_attack = attack(gen);
	return player;
}

