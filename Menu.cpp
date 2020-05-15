#include <iostream>
#include "Menu.hpp"
#include "Rules.hpp"
#include "MenuDifficulty.hpp"

using namespace std;

void Menu() {
	cout<<"                                    _      _    _____                   __\n";
    cout<<"                                   | \\    / |  |       |     |   |    /   \\\n";
    cout<<"                                   |  \\  /  |  |       |     |   |   /     \\\n";
    cout<<"                                   |   \\/   |  |___    |_____|   |___|     |\n";
    cout<<"                                   |        |  |       |     |   |   \\     /\n";
    cout<<"                                   |        |  |_____  |     |   |    \\___/\n\n";
    cout<<"1 - ���� ������ ���������� \n";
    cout<<"2 - ���� ���� ������ ����� \n";
    cout<<"3 - ������� \n";
    cout<<"4 - ��������� \n";
    cout<<"5 - ����� \n";
    
    int choice;
    char difficulty = '3';
    do{
	cout <<endl<<"> ";
	cin>>choice;
	switch(choice) {
case 1:
    break;
case 2:
    break;
case 3:
    Rules ();
    break;
case 4:
	MenuDifficulty(&difficulty);
	break;
case 0:
    cout<<"� ���� ���� ������� ��������. ��������� ���!\n";
    return;
	}
} while(cin);
	
}
