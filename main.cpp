#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include "Logo.hpp"
#include "Rules.hpp"
#include "Menu.hpp"


using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 14));  
	Logo();
	Menu();
	system("pause");
	return 0;
}
