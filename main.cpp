#include <iostream>
#include <stdlib.h>
#include "Logo.hpp"
#include "Rules.hpp"
#include "Menu.hpp"


using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Logo();
	Menu();
	system("pause");
	return 0;
}
