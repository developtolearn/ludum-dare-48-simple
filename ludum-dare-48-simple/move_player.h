#pragma once


array<array<string, 10>, 10> move_player(array<array<string, 10>, 10> map, string direction) {
	// find player coords
	int player_i = -1;
	int player_j = -1;
	bool found = false;
	for (int i = 0; i < 10; i++) {
		if (found) { break; }
		for (int j = 0; j < 10; j++) {
			if (map[i][j] == "P") {
				player_i = i;
				player_j = j;
				found = true;
				//cout << player_i << " " << player_j;
				break;
			}
		}
	}
	
	// wall collision check
	if (direction == "NORTH") {
		if (map[player_i-1][player_j] == "#") {
			cout << "You smack your head against a wall. Ouch!\n";
			return map;
		}
		else if (map[player_i - 1][player_j] == "E") {
			map = gen_map();
		}
		else {
			cout << "You moved NORTH.\n";
			map[player_i][player_j] = " ";
			map[player_i - 1][player_j] = "P";
			//print_map(map);
			return map;
		}
	}
	else if (direction == "SOUTH") {
		if (map[player_i+1][player_j] == "#") {
			cout << "You smack your head against a wall. Ouch!\n";
			return map;
		}
		else if (map[player_i + 1][player_j] == "E") {
			map = gen_map();
		}
		else {
			cout << "You moved SOUTH.\n";
			map[player_i][player_j] = " ";
			map[player_i + 1][player_j] = "P";
			//print_map(map);
			return map;
		}
	}
	else if (direction == "EAST") {
		if (map[player_i][player_j+1] == "#") {
			cout << "You smack your head against a wall. Ouch!\n";
			return map;
		}
		else if (map[player_i][player_j+1] == "E") {
			map = gen_map();
		}
		else {
			cout << "You moved EAST.\n";
			map[player_i][player_j] = " ";
			map[player_i][player_j+1] = "P";
			//print_map(map);
			return map;
		}
	}
	else if (direction == "WEST") {
		if (map[player_i][player_j-1] == "#") {
			cout << "You smack your head against a wall. Ouch!\n";
			return map;
		}
		else if (map[player_i][player_j-1] == "E") {
			map = gen_map();
		}
		else {
			cout << "You moved WEST.\n";
			map[player_i][player_j] = " ";
			map[player_i][player_j-1] = "P";
			//print_map(map);
			return map;
		}
	}
	
	return map;
}