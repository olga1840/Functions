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

void Print(int arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double brr[], const int n);
void Print(double brr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float crr[], const int n);
void Print(float crr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char drr[], const int n);
void Print(char drr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double brr[], const int n);
double Sum(double brr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float crr[], const int n);
float Sum(float crr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char drr[], const int n);
char Sum(char drr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double brr[], const int n);
double Avg(double brr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float crr[], const int n);
float Avg(float crr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char drr[], const int n);
char Avg(char drr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double brr[], const int n);
double minValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float crr[], const int n);
float minValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char drr[], const int n);
char minValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double brr[], const int n);
double maxValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float crr[], const int n);
float maxValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char drr[], const int n);
char maxValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(double brr[], const int n, int number_of_shifts);
void shiftLeft(double brr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(float crr[], const int n, int number_of_shifts);
void shiftLeft(float crr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(char drr[], const int n, int number_of_shifts);
void shiftLeft(char drr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double brr[], const int n, int number_of_shifts);
void shiftRight(double brr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(float crr[], const int n, int number_of_shifts);
void shiftRight(float crr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char drr[], const int n, int number_of_shifts);
void shiftRight(char drr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double brr[], const int n);
void Sort(double brr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float crr[], const int n);
void Sort(float crr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char drr[], const int n);
void Sort(char drr[ROWS][COLS], const int ROWS, const int COLS);

void UniqueRand(int arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double brr[], const int n);
void UniqueRand(double brr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(float crr[], const int n);
void UniqueRand(float crr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char drr[], const int n);
void UniqueRand(char drr[ROWS][COLS], const int ROWS, const int COLS);


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


void Print(int arr[], const int n)
{
    //Вывод массива на экран:
		for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
		cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(double brr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
}

void Print(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << brr[i][j] << "\t";
		}
		cout << endl;
	}
}


void Print(float crr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << crr[i] << "\t";
	}
	cout << endl;
}

void Print(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(char drr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << drr[i] << "\t";
	}
	cout << endl;
}

void Print(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << drr[i][j] << "\t";
		}
		cout << endl;
	}
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

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
	cout << endl;
}


double Sum(double brr[], const int n)
{
	//возвращает сумму элементов массива
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += brr[i];
	}
	return sum;
	cout << endl;
}

double Sum(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += brr[i][j];
		}
	}
	return sum;
	cout << endl;
}

float Sum(float crr[], const int n)
{
	//возвращает сумму элементов массива
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += crr[i];
	}
	return sum;
	cout << endl;
}

float Sum(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += crr[i][j];
		}
	}
	return sum;
	cout << endl;
}

char Sum(char drr[], const int n)
{
	//возвращает сумму элементов массива
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += drr[i];
	}
	return sum;
	cout << endl;
}

char Sum(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает сумму элементов массива
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += drr[i][j];
		}
	}
	return sum;
	cout << endl;
}


double Avg(int arr[], const int n)
{
	//возвращает среднее арифметическое из массива
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает среднее арифметическое из массива
	return (double)Sum(arr, ROWS, COLS) / ROWS, COLS;
}
double Avg(double brr[], const int n)
{
	//возвращает среднее арифметическое из массива
	return (double)Sum(brr, n) / n;
}

double Avg(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает среднее арифметическое из массива
	return (double)Sum(brr, ROWS, COLS) / ROWS, COLS;
}


float Avg(float crr[], const int n)
{
	//возвращает среднее арифметическое из массива
	return (float)Sum(crr, n) / n;
}

float Avg(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает среднее арифметическое из массива
	return (float)Sum(crr, ROWS, COLS) / ROWS, COLS;
}

char Avg(char drr[], const int n)
{
	//возвращает среднее арифметическое из массива
	return (char)Sum(drr, n) / n;
}

char Avg(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает среднее арифметическое из массива
	return (char)Sum(drr, ROWS, COLS) / ROWS, COLS;
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

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает минимальное значение из массива
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		return min;
	}
}


	double minValueIn(double brr[], const int n)
	{
		//возвращает минимальное значение из массива
		double min = brr[0];
		for (int i = 0; i < n; i++)
		{
			if (brr[i] < min) min = brr[i];
		}
		return min;

	}

	double minValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS)
	{
		//возвращает минимальное значение из массива
		double min = brr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (brr[i][j] < min) min = brr[i][j];
			}
			return min;
		}
	}


float minValueIn(float crr[], const int n)
{
	//возвращает минимальное значение из массива
	float min = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] < min) min = crr[i];
	}
	return min;
}

float minValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает минимальное значение из массива
	float min = crr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (crr[i][j] < min) min = crr[i][j];
		}
		return min;
	}
}


char minValueIn(char drr[], const int n)
{
	//возвращает минимальное значение из массива
	char min = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] < min) min = drr[i];
	}
	return min;
}

char minValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает минимальное значение из массива
	char min = drr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (drr[i][j] < min) min = drr[i][j];
		}
		return min;
	}
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

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		return max;
	}
}

double maxValueIn(double brr[], const int n)
{
	//возвращает максимальное значение из массива
	double max = brr[0];
	for (int i = 0; i < n; i++)
	{
		if (brr[i] > max) max = brr[i];
	}
	return max;
}

double maxValueIn(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	double max = brr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (brr[i][j] > max) max = brr[i][j];
		}
		return max;
	}
}

float maxValueIn(float crr[], const int n)
{
	//возвращает максимальное значение из массива
	float max = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] > max) max = crr[i];
	}
	return max;
}

float maxValueIn(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	float max = crr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (crr[i][j] > max) max = crr[i][j];
		}
		return max;
	}
}

char maxValueIn(char drr[], const int n)
{
	//возвращает максимальное значение из массива
	char max = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] > max) max = drr[i];
	}
	return max;
}

char maxValueIn(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	//возвращает максимальное значение из массива
	char max = drr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (drr[i][j] > max) max = drr[i][j];
		}
		return max;
	}
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

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
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

void shiftLeft(double brr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = brr[0];
		for (int i = 0; i < n; i++)
		{
			brr[i] = brr[i + 1];
		}
		brr[n - 1] = buffer;
	}
}

void shiftLeft(double brr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = brr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				brr[i][j] = brr[i + 1][j + 1];
			}
			brr[ROWS - 1][COLS - 1] = buffer;
		}
	}
}

void shiftLeft(float crr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = crr[0];
		for (int i = 0; i < n; i++)
		{
			crr[i] = crr[i + 1];
		}
		crr[n - 1] = buffer;
	}
}

void shiftLeft(float crr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = crr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				crr[i][j] = crr[i][j + 1];
			}
			crr[i][COLS - 1] = crr[i + 1][0];
		}
		crr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(char drr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = drr[0];
		for (int i = 0; i < n; i++)
		{
			drr[i] = drr[i + 1];
		}
		drr[n - 1] = buffer;
	}
}

void shiftLeft(char drr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = drr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				drr[i][j] = drr[i + 1][j + 1];
			}
			drr[i][COLS - 1] = drr[i + 1][0];
		}
		drr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(arr, ROWS, ROWS, COLS);
}

void shiftRight(double brr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(brr, n, n - number_of_shifts);
}

void shiftRight(double brr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(brr, ROWS, ROWS, COLS);
}

void shiftRight(float crr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(crr, n, n - number_of_shifts);
}

void shiftRight(float crr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(crr, ROWS, ROWS, COLS);
}

void shiftRight(char drr[], const int n, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	shiftLeft(drr, n, n - number_of_shifts);
}

void shiftRight(char drr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//выполняет циклический сдвиг массива вправо
	number_of_shifts = number_of_shifts % (ROWS * COLS);
	number_of_shifts = ROWS * COLS - number_of_shifts;
	shiftLeft(drr, ROWS, ROWS, COLS);
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

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*if (arr[i][j] < arr[i+1][j+1])
			{
				int buffer = arr[i][j];
				arr[i+1][j+1] = arr[i][j];
				arr[i][j] = buffer;
			}*/
		}
	}
	cout << delimeter << endl;
}

void Sort(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			/*if (brr[j] < brr[i])
			{
				double buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = buffer;
			}*/
		}
	}
}

void Sort(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*if (brr[i][j] < brr[i + 1][j + 1])
			{
				double buffer = brr[i][j];
				brr[i + 1][j + 1] = brr[i][j];
				brr[i][j] = buffer;
			}*/
		}
	}
	cout << delimeter << endl;
}

void Sort(float crr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			/*if (crr[j] < crr[i])
			{
				float buffer = crr[i];
				crr[i] = crr[j];
				crr[j] = buffer;
			}*/
		}
	}
	cout << delimeter << endl;
}

void Sort(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*if (crr[i][j] < crr[i + 1][j + 1])
			{
				float buffer = crr[i][j];
				crr[i + 1][j + 1] = crr[i][j];
				crr[i][j] = buffer;
			}*/
		}
	}
	cout << delimeter << endl;
}

void Sort(char drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (drr[j] < drr[i])
			{
				char buffer = drr[i];
				drr[i] = drr[j];
				drr[j] = buffer;
			}
		}
	}
	cout << delimeter << endl;
}

void Sort(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/*if (drr[i][j] < drr[i + 1][j + 1])
			{
				char buffer = drr[i][j];
				drr[i + 1][j + 1] = drr[i][j];
				drr[i][j] = buffer;
			}*/
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

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] != arr[i+1][j+1])
			{
				return Print(arr, ROWS, COLS);
			}
		}
	}
	cout << endl;
}


void UniqueRand(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (brr[i] != brr[j])
			{
				return Print(brr, n);
			}
		}
	}
}

void UniqueRand(double brr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (brr[i][j] != brr[i + 1][j + 1])
			{
				return Print(brr, ROWS, COLS);
			}
		}
	}
	cout << endl;
}

void UniqueRand(float crr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (crr[i] != crr[j])
			{
				return Print(crr, n);
			}
		}
	}
	cout << endl;
}

void UniqueRand(float crr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (crr[i][j] != crr[i + 1][j + 1])
			{
				return Print(crr, ROWS, COLS);
			}
		}
	}
	cout << endl;
}

void UniqueRand(char drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (drr[i] != drr[j])
			{
				return Print(drr, n);
			}
		}
	}
	cout << endl;
}

void UniqueRand(char drr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (drr[i][j] != drr[i + 1][j + 1])
			{
				return Print(drr, ROWS, COLS);
			}
		}
	}
	cout << endl;
}

