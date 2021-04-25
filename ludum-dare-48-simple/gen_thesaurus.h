#pragma once


unordered_map<string, unordered_set<string>> gen_thesaurus()
{
	// manually define synnonymns of main words
	unordered_map<string, unordered_set<string>> thesaurus;
	thesaurus["access"] = {
		"access", "open", "show", "print", "display"
	};
	thesaurus["move"] = {
	"move", "go", "walk", "run"
	};
	thesaurus["observe"] = {
		"observe", "look", "view"
	};

	return thesaurus;
}