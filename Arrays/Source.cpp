#include<iostream>
using namespace std;

#define delimeter "\n-------------------------------------------\n"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, double minRand = 0, double maxRand = 100);
void FillRand(float arr[], const int n, float minRand = 0, float maxRand = 100);
void FillRand(char arr[], const int n, char minRand = 0, char maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);

double Avg(int arr[], const int n);

int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void Sort(int arr[], const int n);
void UniqueRand(int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};

	FillRand(arr, n, 0, 100);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(arr, n) << endl; 
	Sort(arr, n);
	Print(arr, n);
	UniqueRand(arr, n);
	
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, n - number_of_shifts);
	Print(arr, n);

	cout << delimeter << endl;

	/*const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);*/
	/*cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(brr, SIZE) << endl;*/
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

void FillRand(double arr[], const int n, double minRand, double maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100; 
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 100;
	}
}

void FillRand(float arr[], const int n, float minRand, float maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 100;
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

void Print(double arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(float arr[], const int n)
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

}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(arr, n, n - number_of_shifts);
}

void Sort(int arr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}

	}
	cout << delimeter << endl;
}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] != arr[j])
			{
				return Print(arr, n);
			}
		}
	}
	cout << endl;
}


