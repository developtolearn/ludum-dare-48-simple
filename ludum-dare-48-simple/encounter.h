#pragma once


array<array<string, 10>, 10> encounter(array<array<string, 10>, 10> map, int i, int j) {


	// remove monster
	map[i][j] = " ";

	return map;
}