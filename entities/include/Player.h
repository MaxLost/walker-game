#pragma once

#include "Entity.h"
#include "Zone.h"
#include <conio.h>

class Player : public Entity {

	private:
		bool alive;
		int size;
		int pos_x;
		int pos_y;
		int speed;
		Zone* gamezone;

		void GetNewPosition(int pressed_key);

	public:

		Player(int size, Zone* gamezone);
		//Player(int size, int pos_x, int pos_y);

		void Draw(HDC window);
		bool IsAlive();

		~Player();

};