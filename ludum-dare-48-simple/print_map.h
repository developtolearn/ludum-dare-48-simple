#pragma once


int print_map(array<array<string, 10>, 10> map)
{
    // print every key, value pair in phrase book
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << map[i][j] << " ";
        };
        cout << "\n";
    };
    return 0;
}
