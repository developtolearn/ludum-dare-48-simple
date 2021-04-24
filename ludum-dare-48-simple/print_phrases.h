#pragma once
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;


int print_phrases(unordered_map<string, unordered_set<string>> phrases)
{
    // print every key, value pair in phrase book
    for (auto const& verb : phrases) {
        for (auto const& noun : phrases[verb.first]) {
            cout << verb.first << " " << noun << "\n";
        };
    };
    return 0;
}
