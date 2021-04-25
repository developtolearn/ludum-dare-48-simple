#pragma once


unordered_map<string, unordered_set<string>> gen_thesaurus()
{
	// manually define synnonymns of main words
	unordered_map<string, unordered_set<string>> thesaurus;
	thesaurus["ACCESS"] = {
		"ACCESS", "OPEN", "SHOW", "PRINT", "DISPLAY", "CHECK"
	};
	thesaurus["MOVE"] = {
	"MOVE", "GO", "WALK", "RUN"
	};

	return thesaurus;
}