#include "../include/Borders.h"

Borders::Borders(int anchor_x, int anchor_y) {
	safezone = new Zone(anchor_x, anchor_y, 500, 400);
}

void Borders::Draw(HDC window) {
	
	for (int i = safezone->GetLeftBound() - 1; i <= safezone->GetRightBound() + 1; i++) {
		for (int j = safezone->GetUpperBound() - 1; j <= safezone->GetUpperBound(); j++) {
			SetPixel(window, i, j, RGB(255, 255, 255));
		}
		for (int j = safezone->GetLowerBound(); j <= safezone->GetLowerBound() + 1; j++) {
			SetPixel(window, i, j, RGB(255, 255, 255));
		}
	}
	for (int i = safezone->GetUpperBound() - 1; i <= safezone->GetLowerBound() + 1; i++) {
		for (int j = safezone->GetLeftBound() - 1; j <= safezone->GetLeftBound(); j++) {
			SetPixel(window, j, i, RGB(255, 255, 255));
		}
		for (int j = safezone->GetRightBound(); j <= safezone->GetRightBound() + 1; j++) {
			SetPixel(window, j, i, RGB(255, 255, 255));
		}
	}
	return;
}

Zone* Borders::GetSafezone() {
	return safezone;
}

Borders::~Borders() {
	delete(safezone);
}