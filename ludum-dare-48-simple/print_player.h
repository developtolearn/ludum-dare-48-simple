#pragma once


int print_player()
{
    // print every key, value pair in player sheet
    //for (auto const& stat : player) {
    //    cout
    //        << stat.first << ": " << stat.second << "\n";
    //}
    
    // print the player stats
    cout 
        << "Confidence: " << g_player_health << "\n"
        << "Empathy: " << g_player_attack << "\n";

    return 0;
}