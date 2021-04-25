#pragma once


int print_verbs(unordered_map<string, unordered_set<string>> phrases)
{
    // print every key in phrase book
    cout << "List of <VERB>s:\n";
    for (auto const& verb : phrases) {
        cout << verb.first << "\n";
    }
    return 0;
}

