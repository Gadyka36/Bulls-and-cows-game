#include <iostream>
#include "Menu.hpp"
#include "Rules.hpp"
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
    cout<<"4 - ����� \n";
    
    int choice;
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
    cout<<"� ���� ���� ������� ��������. ��������� ���!\n";
    return;
	}
} while(cin);
	
}
