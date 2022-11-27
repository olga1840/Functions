#include<iostream>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
void fibonacci1(int n, int a = 0, int b = 1);
void fibonacci2(int n, int i = 0, long long int a = 0, long long int b = 1);

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "");

#ifdef ELEVATOR
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

#ifdef FACTORIAL
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
#endif //FACTORIAL

#ifdef POWER
double a; int n;
cout << "Введите число основание: "; cin >> a;
cout << "Введите число показатель степени: "; cin >> n;
cout << power(a, n);
#endif

    int n;
    cout << "Введите предельное число: "; cin >> n;
	fibonacci2(n);
}

double power(double a, int n)
{
	//if (n == 0)return 1; //любое число в нулевой степени = 1
	//else if (n < 0)return 1 / a * power(a, n + 1);
	//else return a * power(a, n - 1);
	/*return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);
}

void fibonacci1(int n, int a, int b)
{
	if (a > n)return;
	cout << a  << "\t";
	fibonacci1(n, b, a + b);
}
void fibonacci2(int n, int i, long long int a, long long int b)
{
	if (i > n)return;
	cout << i << "\t" << a << "\n";
	fibonacci2(n, i + 1, b, a + b);
}