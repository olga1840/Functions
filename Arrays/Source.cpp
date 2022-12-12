#include<iostream>
using namespace std;

#define delimeter "\n-------------------------------------------\n"
const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double brr[], const int n, double minRand = 0, double maxRand = 100);
void FillRand(double brr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float crr[], const int n, float minRand = 0, float maxRand = 100);
void FillRand(float crr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char drr[], const int n, char minRand = 0, char maxRand = 100);
void FillRand(char drr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void UniqueRand(T arr[], const int n);
template<typename T>void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	cout << "INT:\n";
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

	cout << "DOUBLE:\n";
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	UniqueRand(brr, SIZE);
	cout << delimeter << endl;

	cout << "FLOAT:\n";
	float crr[n] = {};
	FillRand(crr, n, 0, 100);
	Print(crr, n);
	cout << "Сумма элементов массива: " << Sum(crr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(crr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(crr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(crr, n) << endl;
	Sort(crr, n);
	Print(crr, n);
	UniqueRand(crr, n);

	cout << "CHAR:\n";
	char drr[n] = {};
	FillRand(drr, n, 0, 100);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(drr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(drr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(drr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(drr, n) << endl;
	Sort(drr, n);
	UniqueRand(drr, n);

	cout << "INT_2:\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Sort(i_arr_2, ROWS, COLS);
	//UniqueRand(i_arr_2, ROWS, COLS);


	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	//shiftRight(i_arr_2, ROWS, COLS, n - number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);

#ifdef DEBUG
	cout << "DOUBLE_2:\n";
	double i_brr_2[ROWS][COLS];
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_brr_2, ROWS, COLS) << endl;
	shiftLeft(i_brr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_brr_2, ROWS, COLS, number_of_shifts);
	Sort(i_brr_2, ROWS, COLS);
	UniqueRand(i_brr_2, ROWS, COLS);

	cout << "FLOAT_2:\n";
	float i_crr_2[ROWS][COLS];
	FillRand(i_crr_2, ROWS, COLS);
	Print(i_crr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_crr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_crr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_crr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_crr_2, ROWS, COLS) << endl;
	shiftLeft(i_crr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_crr_2, ROWS, COLS, number_of_shifts);
	Sort(i_crr_2, ROWS, COLS);
	UniqueRand(i_crr_2, ROWS, COLS);

	cout << "CHAR_2:\n";
	char i_drr_2[ROWS][COLS];
	FillRand(i_drr_2, ROWS, COLS);
	Print(i_drr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_drr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_drr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(i_drr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из массива: " << maxValueIn(i_drr_2, ROWS, COLS) << endl;
	shiftLeft(i_drr_2, ROWS, COLS, number_of_shifts);
	shiftRight(i_drr_2, ROWS, COLS, number_of_shifts);
	Sort(i_drr_2, ROWS, COLS);
	UniqueRand(i_drr_2, ROWS, COLS);
#endif // DEBUG
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

void FillRand(double brr[], const int n, double minRand, double maxRand)
{
	if (minRand > maxRand)
	{
		double buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100; 
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		brr[i] = rand() % int((maxRand - minRand) + minRand);
		brr[i] /= 100;
	}
}

void FillRand(float crr[], const int n, float minRand, float maxRand)
{
	if (minRand > maxRand)
	{
		float buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		crr[i] = rand() % int((maxRand - minRand) + minRand);
		crr[i] /= 100;
	}
}

void FillRand(char drr[], const int n, char minRand, char maxRand)
{
	if (minRand > maxRand)
	{
		char buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	//заполнение случайными числами
	for (int i = 0; i < n; i++)
	{
		drr[i] = rand();
	}
}


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			brr[i][j] = rand() % 100;
		}
	}
}

void FillRand(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			crr[i][j] = rand() % 100;
		}
	}
}

void FillRand(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			drr[i][j] = rand() % 100;
		}
	}
}


template<typename T>void Print(T arr[], const int n)
{
    //Вывод массива на экран:
		for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
		cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
template<typename T>T Sum(T arr[], const int n)
{	//возвращает сумму элементов массива
	T sum = 0;
	for (int i = 0; i < n; i++)
	{		sum += arr[i];
	}	return sum;
	cout << endl;
}
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{	//возвращает сумму элементов массива
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{	for (int j = 0; j < COLS; j++)
		{ sum += arr[i][j];
		}
	}	return sum;
	cout << endl;
}
template<typename T>double Avg(T arr[], const int n)
{	//возвращает среднее арифметическое из массива
	return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает среднее арифметическое из массива
	return (double)Sum(arr, ROWS, COLS) / ROWS, COLS;
}
template<typename T>T minValueIn(T arr[], const int n)
{	//возвращает минимальное значение из массива
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{	if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{	//возвращает минимальное значение из массива
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{	for (int j = 0; j < COLS; j++)
		{   if (arr[i][j] < min) min = arr[i][j];
		}	return min;
	}
}
template<typename T>T maxValueIn(T arr[], const int n)
{	//возвращает максимальное значение из массива
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{	if (arr[i] > max) max = arr[i];
	}	return max;
}
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{	//возвращает максимальное значение из массива
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{	for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		} return max;
	}
}
template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
{	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{	T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{	T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
			arr[ROWS - 1][COLS - 1] = buffer;
	}
}
template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts)
{	//выполняет циклический сдвиг массива вправо
	shiftLeft(arr, n, n - number_of_shifts);
}
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(arr, ROWS, ROWS, COLS);
}
template<typename T>void Sort(T arr[], const int n)
{	for (int i = 0; i < n; i++)
	{	for (int j = i + 1; j < n; j++)
		{	//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{	T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
}	cout << delimeter << endl;
}
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{	for (int i = 0; i < ROWS; i++)
	{		for (int j = 0; j < COLS; j++)
		{	/*if (arr[i][j] < arr[i+1][j+1])
			{   T buffer = arr[i][j];
				arr[i+1][j+1] = arr[i][j];
				arr[i][j] = buffer;
			}*/
		}
	}	cout << delimeter << endl;
}
template<typename T>void UniqueRand(T arr[], const int n)
{	for (int i = 0; i < n; i++)
	{	for (int j = i + 1; j < n; j++)
		{	if (arr[i] != arr[j])
			{	return Print(arr, n);
			}
		}
	}	cout << endl;
}
template<typename T>void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{	for (int i = 0; i < ROWS; i++)
	{	for (int j = 0; j < COLS; j++)
		{	if (arr[i][j] != arr[i+1][j+1])
			{	return Print(arr, ROWS, COLS);
			}
		}
	}	cout << endl;
}
