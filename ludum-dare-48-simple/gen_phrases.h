#pragma once
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <list>
using namespace std;


unordered_map<string, unordered_set<string>> gen_phrases(unordered_map<string, unordered_set<string>> thesaurus)
{
    unordered_map<string, unordered_set<string>> phrases;
    for (auto const& word : thesaurus["access"]) {
        phrases[word] = {
            "map", "backpack"
        };
    }
    return phrases;
}
