#include "libtcod.hpp"
#include <iostream>

int main() {
	// Initialize player variables
	int playerx = 40, playery = 25;
	
	// Create the console
	TCODConsole::initRoot(80, 50, "libtcod C++ tutorial", false);
	
	// Start the processing loop
	while ( !TCODConsole::isWindowClosed() ) {
		// Create new object of type key		
		TCOD_key_t key;
		
		// Check for key press
		TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
		switch (key.vk) {
			case TCODK_UP : playery--; break;
			case TCODK_DOWN : playery++; break;
			case TCODK_LEFT : playerx--; break;
			case TCODK_RIGHT : playerx++; break;
			default : break;
		}
		
		// Clear the console and update player position		
		TCODConsole::root -> clear();
		TCODConsole::root -> putChar(playerx, playery, '@');
		TCODConsole::flush();
	}
	return 0;
}
