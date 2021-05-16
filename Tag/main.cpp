#include <iostream>
#include <conio.h>
using namespace std;
#define tab "\t"
#define VERTICAL_SHIFT "\n\n\n\n\n\n\n\n\n"
#define HORIZONTAL_SHIFT "\t\t\t\t\t"
void Print(int arr[4][4]);
void Up(int arr[4][4]);
void Down(int arr[4][4]);
void Left(int arr[4][4]);
void Right(int arr[4][4]);
void Move(int arr[4][4]);


void main()
{
	setlocale(LC_ALL, "rus");

	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	Print(arr);


	
	
}

void Print(int arr[4][4])
{
	cout << VERTICAL_SHIFT;
	cout << HORIZONTAL_SHIFT<< "\t ÈÃÐÀ ÏßÒÍÀØÊÈ\n";
	cout << HORIZONTAL_SHIFT << "=================================";
	for (int i = 0; i < 4; i++)
	{
		cout << endl;
		cout << HORIZONTAL_SHIFT;
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] != 0)
				cout << "|   " << arr[i][j] << "\t";
			else
				cout << "|   " << " " << "\t";
		}
		cout << "|" << endl;
		cout << HORIZONTAL_SHIFT << "=================================";
	}
	cout <<"\n\n" HORIZONTAL_SHIFT <<"Óïðàâëåíèå:\t  W\n";
	cout << HORIZONTAL_SHIFT <<"\t\tA S D";
	cout << VERTICAL_SHIFT;
	Move(arr);
}
void Up(int arr[4][4])
{
	int temp = 0;
	for (int i = 0; i <4; i++) {
		if (temp)break;
		for (int j = 0; j < 4; j++) {

			if (!arr[i][j] && i != 0) {
				temp = arr[i - 1][j];
				arr[i - 1][j] = arr[i][j];
				arr[i][j] = temp;
				break;
			}
		}
	}
}
void Down(int arr[4][4])
{
	int temp = 0;
	for (int i = 0; i < 4; i++) {
		if (temp)break;
		for (int j = 0; j < 4; j++) {

			if (!arr[i][j] && i !=3) {
				temp = arr[i + 1][j];
				arr[i + 1][j] = arr[i][j];
				arr[i][j] = temp;
				break;
			}
		}
	}
}
void Left(int arr[4][4])
{
	int temp = 0;
	for (int i = 0; i <4; i++) {
		if (temp)break;
		for (int j = 0; j < 4; j++) {

			if (!arr[i][j] && j != 0) {
				temp = arr[i][j - 1];
				arr[i][j - 1] = arr[i][j];
				arr[i][j] = temp;
				break;
			}
		}
	}
} 
void Right(int arr[4][4])
{
	int temp = 0;
	for (int i = 0; i < 4; i++) {
		if (temp)break;
		for (int j = 0; j < 4; j++) {

			if (!arr[i][j] && j != 3) {
				temp = arr[i][j + 1];
				arr[i][j + 1] = arr[i][j];
				arr[i][j] = temp;
				break;
			}
		}
	}
}
void Move(int arr[4][4])
{
	switch (_getch())
	{
	case 119:
		Down(arr);
		break;
	case 100:
		Left(arr);
		break;
	case 97:
		Right(arr);
		break;
	case 115:
		Up(arr);
		break;
	case 27:
		exit(0);
	default:
		Move(arr);
	}
	system("cls");
	Print(arr);
}