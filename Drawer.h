#pragma once

#include <windows.h>
#include <iostream>
#include <vector>
#include "entities/include/Entity.h"
#include "entities/include/Borders.h"
#include "entities/include/Player.h"

class Drawer {
	
	private:
		std::vector<Entity*> entities;
		HWND window_handle;

		void UpdateFrame();

	public:
		Drawer(HWND window_handle);

		~Drawer();

};