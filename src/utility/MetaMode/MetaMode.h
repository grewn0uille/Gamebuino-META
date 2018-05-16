/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2018

This is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License (LGPL)
as published by the Free Software Foundation, either version 3 of
the License, or (at your option) any later version.

This is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License (LGPL) for more details.

You should have received a copy of the GNU Lesser General Public
License (LGPL) along with the library.
If not, see <http://www.gnu.org/licenses/>.

Authors:
 - Sorunome
*/
#ifndef _GAMEBUINO_META_METAMODE_H_
#define _GAMEBUINO_META_METAMODE_H_

#include <Arduino.h>
#include "../../config/config.h"
#include "../Language.h"

namespace Gamebuino_Meta {

class MetaMode {
   public:
	void update();  // Called every frame by gb.update()
	
	bool isUsingHomeButton();  // Returns true if the home button's release can be ignored (so the Gamebuino menu doesn't trigger)

	// Returns TRUE if the player activated MetaMode. To be used by the games using the library. 
	// Must be called at least once in code for the mode to be able to activate
	bool isActive();
	
   private:
	bool handled = false;  // False by default. Becomes true the first time "isActive()" is called
	bool active = false;   // True once MetaMode has been activated. Cannot be turned off

	bool canDeactivate = false;  // Becomes TRUE once holding the MENU and HOME buttons turn MetaMode off.
	bool canActivate = true;  // Is FALSE while the user keeps the MENU and HOME buttons held after turning MetaMode off.
	
	// TRUE when the HOME button is being used by MetaMode. This prevents the Gamebuino menu from opening when launching MetaMode.
	// This becomes TRUE when the loading time reaches half of the total loading time (while turning on or off the MetaMode)
	// This then becomes FALSE when HOME is released for the first time
	// Note: This means that the HOME button is being "used by meta mode" as long as the user keeps the button down
	bool usingHomeButton;  
	
	// Draws the moving loading lines at the top and bottom of the screen. The lines are horizontal and centered 
	// Parameters :	uint8_t percentage	:	0 is not drawn, 100 takes up the whole width of the screen
	void drawLoadingLines(uint8_t percentage);

	// Draw "META" text to screen with shadow
	void drawTextMeta(int8_t x, int8_t y);
	// Draw "MODE" text to screen with shadow
	void drawTextMode(int8_t x, int8_t y);
};

};  // Namespace Gamebuino_Meta

#endif  // _GAMEBUINO_META_METAMODE_H_