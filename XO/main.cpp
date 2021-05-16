#include <iostream>
#include <conio.h>
using namespace std;
#define tab "\t"
#define VERTICAL_SHIFT "\n\n\n\n\n\n\n\n\n"
#define HORIZONTAL_SHIFT "\t\t\t\t\t\t"
void InitField(char field[]);
void PrintField(char field[], char player);
void Move(char field[], char player);
void Check(char field[], char player);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 9;
	char field[n] = {};
	InitField(field);
	cout<<"��� �������? (y/n): .."<<endl;
	if (_getch() == 'y')main();
}

void InitField(char field[])
{
	for (int i = 0; i < 9; i++)
		field[i] = ' ';
	//void Check(char field, 'X');
	PrintField(field, '0');
}

void PrintField(char field[], char player)
{
	system("CLS");
	cout << VERTICAL_SHIFT;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_SHIFT;
			cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout <<field[i + j];
			if(j!=2)cout << " | ";
		}
		cout << endl;
		if(i!=0)cout <<HORIZONTAL_SHIFT <<"--- --- ---";
		cout << endl;
	}
	//Move(field,player);
	Check(field, player);
}

void Move(char field[], char player)
{
	char key; // ������� ������� ������� � ���������� ASCII - ��� �������
	do
	{
		key = _getch();
		if (key == 27)return;
		if (key < '1' || key>'9') cout << "\a�� ����� �� ������� �������� ����,���������� ������� 1........9" << endl;
		else if (field[key - 49] != ' ')cout << "\a������ ��� ������"<<endl;
	} while (key<'1'||key>'9'|| field[key - 49] != ' ');
		field[key - 49] = player;
		/*if (player == 'X')PrintField(field, '0');
		else PrintField(field, 'X');*/
		//PrintField(field, player == 'X' ? '0' : 'X');
		PrintField(field, player);
}

void Check(char field[], char player)
{
	bool game_over = false;
	if (field[0] == field[4] && field[4] == field[8] && field[4] == player)game_over = true;
	if (field[2] == field[4] && field[4] == field[6] && field[4] == player)game_over = true;

	if (field[0] == field[1] && field[1] == field[2] && field[2] == player)game_over = true;
	if (field[3] == field[4] && field[4] == field[5] && field[4] == player)game_over = true;
	if (field[6] == field[7] && field[7] == field[8] && field[8] == player)game_over = true;

	if (field[0] == field[3] && field[3] == field[6] && field[6] == player)game_over = true;
	if (field[1] == field[4] && field[4] == field[7] && field[7] == player)game_over = true;
	if (field[2] == field[5] && field[5] == field[8] && field[8] == player)game_over = true;

	if (game_over)
	{
		cout << player << " �������" << endl;
		return;
	}

	bool draw = true;
	for (int i = 0; i < 9; i++)
	{
		if (field[i] == ' ')
		{
			draw = false;
		break;
		}
	}
	if (draw)
	{
		cout << "�����" << endl;
		return;
	}

	Move(field, player == 'X' ? '0' : 'X');
	//PrintField(field, player == 'X' ? '0' : 'X');

}