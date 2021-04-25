#pragma once


array<array<string, 10>, 10> place_object(array<array<string, 10>, 10> map, string object) {
	// initialize random engine
	random_device rd;
	mt19937 gen(rd());
	
	// find suitable place on map
	int i, j;
	while (true) {
		if (object == "P") {
			uniform_int_distribution<> coord(1, 8);
			i = coord(gen);
			j = 1;
		}
		else if (object == "E") {
			uniform_int_distribution<> coord(1, 8);
			i = coord(gen);
			j = 8;
		}
		else {
			uniform_int_distribution<> coord(2, 7);
			i = coord(gen);
			j = coord(gen);
		}
		// cout << i << " " << j << "\n";
		if (map[i][j] == " ") {
			map[i][j] = object;
			break;
		}
	}

	return map;
}