#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void minValueIn(int arr[], const int n);
void maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};

	FillRand(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	shiftLeft(arr, n);
}
	
void FillRand(int arr[], const int n)
{
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
    //Вывод массива на экран:
		for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Sum(int arr[], const int n)
{
	//возвращает сумму элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "\n" << "Сумма элементов массива: " << sum << endl;
}

void Avg(int arr[], const int n)
{
	//возвращает среднее арифметическое элементов массива
	double avg = 0; double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		avg = sum / n;
	}
	cout << "Среднее арифметическое элементов массива: " << avg << endl;
}

void minValueIn(int arr[], const int n)
{
	//возвращает минимальное значение из массива
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	cout << "Минимальное значение из массива: " << min << endl;
}

void maxValueIn(int arr[], const int n)
{
	//возвращает максимальное значение из массива
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	cout << "Максимальное значение из массива: " << max << endl;
}

void shiftLeft(int arr[], const int n)
{
	//выполняет циклический сдвиг массива влево
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}



