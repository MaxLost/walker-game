#include "../include/Player.h"

Player::Player(int size, Zone* gamezone) {
	speed = 3;
	alive = false;
	this->size = size;
	this->gamezone = gamezone;
	pos_x = (gamezone->GetRightBound() - gamezone->GetLeftBound()) / 2;
	pos_y = (gamezone->GetLowerBound() - gamezone->GetUpperBound()) / 2;
}

void Player::Draw(HDC window) {

	if (!IsAlive()) {
		alive = true;

		for (int i = pos_x - size; i <= pos_x + size; i++) {
			for (int j = pos_y - size; j <= pos_y + size; j++) {
				SetPixel(window, i, j, RGB(60, 180, 60));
			}
		}

	}
	else {
		int pressed_key = _getch();

		for (int i = pos_x - size; i <= pos_x + size; i++) {
			for (int j = pos_y - size; j <= pos_y + size; j++) {
				SetPixel(window, i, j, RGB(12, 12, 12));
			}
		}

		GetNewPosition(pressed_key);

		for (int i = pos_x - size; i <= pos_x + size; i++) {
			for (int j = pos_y - size; j <= pos_y + size; j++) {
				SetPixel(window, i, j, RGB(60, 180, 60));
			}
		}
	}
}

bool Player::IsAlive() {
	return alive;
}

void Player::GetNewPosition(int pressed_key) {

	switch (pressed_key) {
	case 72:	// UP arrow
		if ((pos_y - speed - size) > gamezone->GetUpperBound()) {
			pos_y -= speed;
		}
		else if (gamezone->GetUpperBound() >= pos_y - size - speed){
			pos_y = gamezone->GetUpperBound() + size + 1;
		}
		break;
	case 75:	// LEFT arrow
		if (pos_x - speed - size > gamezone->GetLeftBound()) {
			pos_x -= speed;
		}
		else if (gamezone->GetLeftBound() >= pos_x - size - speed) {
			pos_x = gamezone->GetLeftBound() + size + 1;
		}
		break;
	case 77:	// RIGHT arrow
		if (pos_x + speed + size < gamezone->GetRightBound()) {
			pos_x += speed;
		}
		else if (gamezone->GetRightBound() <= pos_x + size + speed){
			pos_x = gamezone->GetRightBound() - size - 1;
		}
		break;
	case 80:	// DOWN arrow
		if (pos_y + speed + size < gamezone->GetLowerBound()) {
			pos_y += speed;
		}
		else if (gamezone->GetLowerBound() <= pos_y + size + speed) {
			pos_y = gamezone->GetLowerBound() - size - 1;
		}
		break;
	default:
		break;
	}

}

Player::~Player() {}
