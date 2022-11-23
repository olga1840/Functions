#include<iostream>
using namespace std;

void elevator(int floor);
int factorial(int n);

//#define ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef factorial
	cout << "Hello Recursion" << endl;
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
	
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на  " << floor << " этаже" << endl;
	elevator(floor - 1);
	cout << "Вы на  " << floor << " этаже" << endl;

}
#endif//ELEVATOR

int n;
cout << "Введите число для вычисления факториал: "; cin >> n;
cout << factorial(n) << endl;
}

int factorial(int n)
{
	/*if (n == 0)return 1;
	else return n * factorial(n - 1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
}