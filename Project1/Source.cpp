#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 257; i++)
	{
		cout << i << " " << char(i) << endl;
	}
	int i = _getch();
	cout << i << "\n"; //������� �� ����� ��� ������� �������;



	system("pause");
	return 0;
}