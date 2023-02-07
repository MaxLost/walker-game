#include "../include/Zone.h"

Zone::Zone(int anchor_x, int anchor_y, int size_x, int size_y) {
	lower_x = anchor_x + 1;
	lower_y = anchor_y + 1;
	upper_x = lower_x + size_x;
	upper_y = lower_y + size_y;
}

int Zone::GetUpperBound() {
	return this->lower_y;
}

int Zone::GetLowerBound() {
	return this->upper_y;
}

int Zone::GetLeftBound() {
	return this->lower_x;
}

int Zone::GetRightBound() {
	return this->upper_x;
}

Zone::~Zone() {};