#pragma once
#include "place_object.h"


array<array<string,10>,10> gen_map() {
	// important lore
	g_floor++;
	if (g_floor == 1) {
		cout
			<< "You find yourself in a new, unfamiliar, cave system...\n"
			<< "There is, conviniently, a map lying at your feet, which you pick up.\n"
			<< "Perhaps you should check your map to get your bearings.\n";
	}
	else {
		cout
			<< "You climb down the ladder and find yourself deeper in the cave system...\n"
			<< "There is, conviniently, a map lying at your feet, which you pick up.\n"
			<< "You wonder how deep this cave system could possibly go...\n";
	}
	// generate blank map
	array<array<string, 10>, 10> map0{ {
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
	} };
	// generate map 1
	array<array<string, 10>, 10> map1{ {
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#"," "," ","#","#","#","#"," "," ","#"},
		{"#"," "," "," "," "," ","#"," "," ","#"},
		{"#","#","#","#","#"," ","#"," ","#","#"},
		{"#"," "," ","#","#"," ","#"," "," ","#"},
		{"#"," "," "," "," "," ","#"," "," ","#"},
		{"#"," "," ","#"," ","#","#","#"," ","#"},
		{"#","#","#","#"," ","#","#","#"," ","#"},
		{"#","#","#","#"," "," "," "," "," ","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
	} };
	// generate map 2
	array<array<string, 10>, 10> map2{ {
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#","#","#","#"," "," "," "," ","#","#"},
		{"#","#","#","#"," ","#","#"," ","#","#"},
		{"#"," "," "," "," "," ","#"," ","#","#"},
		{"#"," ","#","#","#"," ","#"," "," ","#"},
		{"#"," ","#"," "," "," ","#"," "," ","#"},
		{"#"," ","#","#","#","#","#","#","#","#"},
		{"#"," "," "," "," "," "," "," ","#","#"},
		{"#","#","#","#","#","#"," "," ","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
	} };
	// generate map 3
	array<array<string, 10>, 10> map3{ {
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#"," "," ","#"," "," ","#"," "," ","#"},
		{"#"," "," ","#"," "," ","#"," "," ","#"},
		{"#"," ","#","#"," ","#","#","#"," ","#"},
		{"#"," ","#"," "," "," ","#","#"," ","#"},
		{"#"," ","#"," "," "," "," "," "," ","#"},
		{"#"," ","#"," "," "," ","#","#"," ","#"},
		{"#"," ","#","#"," ","#","#"," "," ","#"},
		{"#"," "," "," "," ","#","#"," "," ","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
	} };
	// generate map4
	array<array<string, 10>, 10> map4{ {
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#"," "," ","#","#","#","#","#","#","#"},
		{"#"," "," ","#","#","#","#","#","#","#"},
		{"#"," ","#","#","#","#","#","#","#","#"},
		{"#"," ","#","#","#","#","#","#","#","#"},
		{"#"," "," "," "," "," "," ","#","#","#"},
		{"#","#","#","#","#","#"," ","#","#","#"},
		{"#","#","#","#","#","#"," "," "," ","#"},
		{"#","#","#","#","#","#"," "," "," ","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
	} };
	// generate map5
	array<array<string, 10>, 10> map5{ {
		{"#","#","#","#","#","#","#","#","#","#"},
		{"#"," "," ","#","#","#","#","#","#","#"},
		{"#"," "," "," "," ","#","#","#","#","#"},
		{"#"," "," ","#"," ","#","#"," "," ","#"},
		{"#","#","#","#"," ","#","#"," "," ","#"},
		{"#","#","#","#"," "," "," "," "," ","#"},
		{"#"," "," ","#"," ","#","#"," "," ","#"},
		{"#"," "," "," "," ","#","#"," "," ","#"},
		{"#"," "," ","#","#","#","#","#","#","#"},
		{"#","#","#","#","#","#","#","#","#","#"},
	} };

	// initialize random engine
	random_device rd;
	mt19937 gen(rd());
	
	// random map
	uniform_int_distribution<> position(1, 5);
	int map_choice = position(gen);
	array<array<string, 10>, 10> pre_map;
	switch (map_choice) {
		case 1: 
			pre_map = map1;
			break;
		case 2: 
			pre_map = map2;
			break;	
		case 3: 
			pre_map = map3;
			break;	
		case 4: 
			pre_map = map4;
			break;	
		case 5: 
			pre_map = map5;
			break;
		default: 
			cout << "!! Maps Broken !!";
			break;
	}

	// transform map
	uniform_int_distribution<> transform(0, 3);
	int map_transform = transform(gen);
	array<array<string, 10>, 10> map;
	switch (map_transform) {
	case 0:
		map = pre_map;
		break;
	case 1:
		// mirror 45 degrees
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				map[i][j] = pre_map[j][i];
			};
		};
		break;
	case 2:
		// mirror columns
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				map[i][j] = pre_map[9 - i][j];
			};
		};
		break;
	case 3:
		// mirror rows
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				map[i][j] = pre_map[i][9 - j];
			};
		};
		break;
	default:
		cout << "!! Transforms Broken !!";
		break;
	}

	//place objects
	map = place_object(map, "P");  // place player
	map = place_object(map, "M");  // place monster
	map = place_object(map, "E");  // place exit
	//map = place_object(map, "I");  // place item

	return map;
}