#include<iostream>
using namespace std;

int Add(int a, int b);  //Прототип функции (объявление функция - function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
int Pow(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);  //Использование функции (Вызов функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Pow(a, b) << endl;
}

int Add(int a, int b)  //Реализация функции (Определение функции - Function definition)
{
	int sum = a + b;    //Addition - сложение
	return sum;
}
int Sub(int a, int b)
{
	return a - b;     //Subtraction - вычитание
}
int Mul(int a, int b)  //Multiplication - умножение
{
	return a * b;
}
int Div(int a, int b)  //Division - деление
{
	return a / b;
}
int Pow(int a, int b)
{
	int step = 1;
	for (int i = 0; i < b; i++)
	{
		step = step * a;
	}
	return step;
}

