#include <iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);
int Factorial(int n);
double power(double a, int n);


//#define RECURCION_BASICS
//#define FACTORIAL

void main()
{
	setlocale(LC_ALL, "russian");
	system("CLS");
#ifdef RECURCION_BASICS
	/*cout << "Hello World\n";


int floor;
cout << "На каком вы этаже?"; cin >> floor;
elevator(floor);
cout << "Еще разочек? (y,n):";
if(_getch() == 'y' )main();
cout << "Введите число: "; cin >> floor;
Factorial(floor);*/
#endif // RECURCION_BASICS
#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	cout << Factorial(n);
}
#endif // FACTORIAL

int a; //основание
int n; // степень
cout << "Введите основание степени: "; cin >> a;
cout << "Введите показатель степени: "; cin >> n;
cout << power(a, n);

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

int Factorial(int n)
{
	//if (n == 0)return 1;
	//return n* Factorial(n - 1);
	return n == 0 ? 1 : n * Factorial(n - 1);
}

double power(double a, int n)
{
	/*if (n == 0) return 1;
	if(n>0)return a*power(a,n-1);
	if(n<0)return 1/a*power(a,n+1);
	*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1):1/a*power(a,n+1);
}
