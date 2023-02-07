#pragma once

#include <windows.h>

/*
 *	Parent class for all entities in game
 *	Every entity must be derived from this class
 */

class Entity {

	public:

		Entity();

		virtual void Draw(HDC window);

		~Entity();

};