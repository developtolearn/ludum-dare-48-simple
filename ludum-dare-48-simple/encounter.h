#pragma once


array<array<string, 10>, 10> encounter(array<array<string, 10>, 10> map, int i, int j) {
	// initialize random engine
	random_device rd;
	mt19937 gen(rd());

	// roll random monster stats
	uniform_int_distribution<> health(5, 15);
	int monster_health = health(gen);
	uniform_int_distribution<> attack(1, 5);
	int monster_attack = attack(gen);

	while (monster_health > 0) {
		// monster attack
		cout << "The monster hurls an insult your way!\nThat was quite a hit to your confidence.\n";
		g_player_health -= monster_attack;

		// check is player died
		if (g_player_health <= 0) {
			you_died();
		}
		
		// counter attack
		cout << "You give the monster a hug!\nThey seem to be warming up to you.\n";
		monster_health -= g_player_attack;
	}
	// remove monster
	cout 
		<< "The monster gave you their phone number!\n"
		<< "The monster left to go prepare for the date. Keep exploring!\n";
	g_numbers++;
	map[i][j] = " ";

	return map;
}