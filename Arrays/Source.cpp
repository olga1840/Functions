#include<iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};

	FillRand(arr, n, 0, 100);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(arr, n) << endl; 
	shiftLeft(arr, n);
	shiftRight(arr, n);
}
	
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void Print(int arr[], const int n)
{
    //Вывод массива на экран:
		for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
		cout << endl;
}

int Sum(int arr[], const int n)
{
	//возвращает сумму элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	cout << endl;
}

double Avg(int arr[], const int n)
{
	//возвращает среднее арифметическое из массива
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	//возвращает минимальное значение из массива
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
	cout << endl;
}

int maxValueIn(int arr[], const int n)
{
	//возвращает максимальное значение из массива
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
	cout << endl;
}

void shiftLeft(int arr[], const int n)
{
	//выполняет циклический сдвиг массива влево
	int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	return Print(arr, n);
	cout << endl;
}

void shiftRight(int arr[], const int n)
{
	//выполняет циклический сдвиг массива вправо
	int numbers_of_shifts;
	cout << "Введите количество сдвигов вправо: "; cin >> numbers_of_shifts;
	numbers_of_shifts = n - numbers_of_shifts;
	for (int i = 0; i < numbers_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	return Print(arr, n);
	cout << endl;
}



