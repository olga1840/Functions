#include<iostream>
using namespace std;

int Add(int a, int b);  //�������� ������� (���������� ������� - function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
int Pow(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b);  //������������� ������� (����� ������� - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Pow(a, b) << endl;
}

int Add(int a, int b)  //���������� ������� (����������� ������� - Function definition)
{
	int sum = a + b;    //Addition - ��������
	return sum;
}
int Sub(int a, int b)
{
	return a - b;     //Subtraction - ���������
}
int Mul(int a, int b)  //Multiplication - ���������
{
	return a * b;
}
int Div(int a, int b)  //Division - �������
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

