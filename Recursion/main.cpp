#include <iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "russian");
	system("CLS");
		cout << "Hello World\n";


		int floor;
		cout << "�� ����� �� �����?"; cin >> floor;
		elevator(floor);
		cout << "��� �������? (y,n):";
		if(_getch() == 'y' )main();
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "������ ������!";
		return;
	}
	cout << "�� �� " << floor << " �����" << endl;
	elevator(floor-1);
	cout << "�� �� " << floor << " �����" << endl;
}