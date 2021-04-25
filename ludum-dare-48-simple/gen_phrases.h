#pragma once
#include "gen_thesaurus.h"


unordered_map<string, unordered_set<string>> gen_phrases()
{
    // get thesaurus
    unordered_map<string, unordered_set<string>> thesaurus;
    thesaurus = gen_thesaurus();
    
    // generate phrase book using all available synonymns of verbs
    unordered_map<string, unordered_set<string>> phrases;
    for (auto const& word : thesaurus["ACCESS"]) {
        phrases[word] = {
            "MAP"
        };
    }
    for (auto const& word : thesaurus["MOVE"]) {
        phrases[word] = {
            "NORTH", "SOUTH", "EAST", "WEST"
        };
    }
    //for (auto const& word : thesaurus["observe"]) {
    //    phrases[word] = {
    //        "left", "right", "forward", "back", "up", "down"
    //    };
    //}
    return phrases;
}
