// WalkerGame.cpp : Defines the entry point for the application.
//

#include "WalkerGame.h"

int main()
{
	
	HWND console_handle = GetConsoleWindow();
	Drawer* main = new Drawer(console_handle);
	return 0;
}
