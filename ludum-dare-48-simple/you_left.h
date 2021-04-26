#pragma once


int you_left() {
	if (g_numbers > 0) {
		cout
			<< "Your decided that's probably enough phone numbers and potential dates.\n"
			<< "Beaming with joy, you leave the cave system back the way you came.\n"
			<< "You managed to secure " << g_numbers << " phone numbers!\n";
	}
	else {
		cout
			<< "You can't gather enough courage to even look at a monster, let alone try to date one.\n"
			<< "Trembling, you crawl your way back to the entrance of the cave, accomplishing nothing.\n";
	}
	cout
		<< "You reached level " << g_floor << " of the cave!\n\n"
		<< "THANKS FOR PLAYING!\n\n";
	return 0;
}