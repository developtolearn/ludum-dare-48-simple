#pragma once


int help() {
	// player instructions
	cout
		<< "\n||" << string(93, '=') << "||\n"
		<< "||                                        INSTRUCTIONS                                         ||\n"
		<< "||" << string(93, '=') << "||\n"
		<< "|| Helpful Commands (don't worry, these aren't case sensitive):                 Map key:       ||\n"
		<< "||     HELP: Brings up these instructions again                                     P: Player  ||\n"
		<< "||     EXIT: Exits the game quite abruptly                                          M: Monster ||\n"
		<< "|| Gameplay commands are in the form of <VERB> <NOWN> pairs, (e.g., LOOK LEFT)      E: Exit    ||\n"
		<< "|| Here are a few useful, non-obvious, or meta pairs:                               I: Item    ||\n"
		<< "||     LIST VERBS: lists all the available verbs and their recognized synonymns     #: Wall    ||\n"
		//<< "||     HOW <VERB>: lists all the nouns for an available verb                                   ||\n"
		<< "||     MOVE <DIRECTION>: Currently only works with NORTH, SOUTH, EAST, WEST.                   ||\n"
		<< "||" << string(93, '=') << "||\n\n";
	return 0;
}
