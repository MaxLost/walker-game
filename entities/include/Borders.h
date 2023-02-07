#pragma once

#include "Entity.h"
#include "Zone.h"

class Borders : public Entity {

	private:
		Zone* safezone;
		
	public:
		
		Borders(int anchor_x, int anchor_y);
		
		void Draw(HDC window);

		Zone* GetSafezone();

		~Borders();
};