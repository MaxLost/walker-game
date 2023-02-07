#pragma once

class Zone {

	private:
		int lower_x;
		int lower_y;
		int upper_x;
		int upper_y;

	public:
		Zone(int anchor_x, int anchor_y, int size_x, int size_y);

		//int IsInZone(int x, int y);
		int GetUpperBound();
		int GetLowerBound();
		int GetLeftBound();
		int GetRightBound();

		~Zone();
};