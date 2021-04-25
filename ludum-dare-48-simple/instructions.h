#pragma once


int instructions(map<string, string> player) {
	// player instructions
	string name = player["name"];
	int name_length = name.length();
	cout
		<< "\n||" << string(93, '=') << "||\n"
		<< "||                                        INSTRUCTIONS                                         ||\n"
		<< "||" << string(93, '=') << "||\n"
		<< "|| Welcome, " << name << "!" << string(82-name_length, ' ') << "||\n"
		<< "||                                                                                             ||\n"
		<< "|| I'm going to break the 4th wall for a moment so I can explain how this game actually works! ||\n"
		<< "|| I wrote this whole game, including the engine, during Ludum Dare 48, a prolific game jam.   ||\n"
		<< "|| It's written in C++, using only the standard library, and probably the worst language       ||\n"
		<< "|| parser that has ever been writen since the days of QBASIC. Anyways that just means your     ||\n"
		<< "|| options are going to be limited. I'll stop rambing now and explain the game!                ||\n"
		<< "||                                                                                             ||\n"
		<< "|| Helpful Commands (don't worry, these aren't case sensitive):                 Map key:       ||\n" 
		<< "||     HELP: Brings up these instructions again                                     P: Player  ||\n" 
		<< "||     EXIT: Exits the game quite abruptly                                          M: Monster ||\n" 
		<< "|| Gameplay commands are in the form of <VERB> <NOWN> pairs, (e.g., LOOK LEFT)      E: Exit    ||\n" 
		<< "|| Here are a few useful, non-obvious, or meta pairs:                               I: Item    ||\n"
		<< "||     LIST VERBS: lists all the available verbs and their recognized synonymns     #: Wall    ||\n"
		//<< "||     HOW <VERB>: lists all the nouns for an available verb                                   ||\n"
		<< "||     MOVE <DIRECTION>: Currently only works with NORTH, SOUTH, EAST, WEST. Ran out of time :( ||\n"
		<< "||" << string(93, '=') << "||\n\n";
	return 0;
}