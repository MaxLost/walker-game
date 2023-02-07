#include "Drawer.h"


Drawer::Drawer(HWND window_handle) {
	this->window_handle = window_handle;
	
	Borders* borders = new Borders(10, 4);
	this->entities.push_back(borders);
	
	Player* player = new Player(1, borders->GetSafezone());
	this->entities.push_back(player);
	UpdateFrame();
};
	
Drawer::~Drawer() {};
		
void Drawer::UpdateFrame() {
	
	while (true) {

		HDC window = GetDC(this->window_handle);

		for (int i = 0; i < entities.size(); i++) {
			
			(*entities[i]).Draw(window);
			
		}
		
		ReleaseDC(this->window_handle, window);
	}

}
