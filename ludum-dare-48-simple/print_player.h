#pragma once


int print_player(map<string, string> player)
{
    // print every key, value pair in player sheet
    for (auto const& stat : player) {
        cout << stat.first << ": " << stat.second << "\n";
    };
    return 0;
}