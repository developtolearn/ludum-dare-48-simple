#pragma once
#include <stdlib.h>


int you_died() {
	cout
		<< "Your confidence just wasn't strong enough to secure another date.\n"
		<< "Crestfallen once again, you throw your phone to the ground, smashing it!\n"
		<< "You inadvertently destroyed any phone numbers you had.\n"
		<< "Sulking, you leave the cave system back the way you came.\n"
		<< "You reached level " << g_floor << " of the cave!\n\n"
		<< "THANKS FOR PLAYING!\n\n";
	_Exit(0);
	return 0;
}