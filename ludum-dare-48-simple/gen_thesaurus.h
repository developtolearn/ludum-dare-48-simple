#pragma once
#include <string>
#include <unordered_map>
#include <unordered_set>


unordered_map<string, unordered_set<string>> gen_thesaurus()
{
	unordered_set<string> syn_access;
	syn_access = {
		"access", "open", "show", "print"
	};

	unordered_map<string, unordered_set<string>> thesaurus;
	for (auto const& word : syn_access) {
		thesaurus["access"].insert(word);
	}

	return thesaurus;
}