#include <iostream>
#include "MenuDifficulty.hpp"

using namespace std;


void MenuDifficulty(char *difficulty)
{
	do{
	   
		cout<<"1.�����  (4 numbers)\n";
		cout<<"2.������ (5 numbers)\n";
		cout<<"3.������ (6 numbers)\n";
		cout<<"Choose:";
	    cin >> difficulty;
	}
	 while ((*difficulty < '1') || (*difficulty > '3'));

}
	

