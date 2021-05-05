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
		cout << "На каком вы этаже?"; cin >> floor;
		elevator(floor);
		cout << "Еще разочек? (y,n):";
		if(_getch() == 'y' )main();
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Привет подвал!";
		return;
	}
	cout << "Мы на " << floor << " этаже" << endl;
	elevator(floor-1);
	cout << "Мы на " << floor << " этаже" << endl;
}