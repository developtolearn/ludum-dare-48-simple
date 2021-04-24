#pragma once
#include <string>
#include <unordered_map>
#include <unordered_set>
#include "gen_thesaurus.h"
using namespace std;


unordered_map<string, unordered_set<string>> gen_phrases()
{
    // get thesaurus
    unordered_map<string, unordered_set<string>> thesaurus;
    thesaurus = gen_thesaurus();
    
    // generate phrase book using all available synonymns of verbs
    unordered_map<string, unordered_set<string>> phrases;
    for (auto const& word : thesaurus["access"]) {
        phrases[word] = {
            "map", "backpack"
        };
    }
    for (auto const& word : thesaurus["move"]) {
        phrases[word] = {
            "left", "right", "forward", "back"
        };
    }
    for (auto const& word : thesaurus["observe"]) {
        phrases[word] = {
            "left", "right", "forward", "back", "up", "down"
        };
    }
    return phrases;
}
