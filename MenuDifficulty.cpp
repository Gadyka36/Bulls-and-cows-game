#include <iostream>
#include "MenuDifficulty.hpp"

using namespace std;


void MenuDifficulty(char *difficulty)
{
	do{
	   
		cout<<"1.Легко  (4 numbers)\n";
		cout<<"2.Средне (5 numbers)\n";
		cout<<"3.Сложно (6 numbers)\n";
		cout<<"Choose:";
	    cin >> difficulty;
	}
	 while ((*difficulty < '1') || (*difficulty > '3'));

}
	

