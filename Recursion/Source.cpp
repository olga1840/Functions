﻿#include<iostream>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "");
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