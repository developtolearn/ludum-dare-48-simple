// ludum-dare-48-simple.cpp : This file contains the 'main' function. Program execution begins and ends there.
int g_floor{};
int g_numbers{};
int g_player_health{};
int g_player_attack{};
#include "a_deeper_love.h"


int main()
{
    // startup
    lore();
    map<string, string> player = gen_player();
    instructions(player);
    g_floor = 0;
    array<array<string, 10>, 10> map = gen_map();
    unordered_map<string, unordered_set<string>> phrases = gen_phrases();

    // main loop
    string command;
    do {
        command = get_command();
        map = parse_command(command, phrases, map);
    } while (command != "EXIT");
    you_left();
    cout << "Type anything to exit\n";
    command = get_command();
    return 0;
}
