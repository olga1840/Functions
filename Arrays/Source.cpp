#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Shift.h"
#include"Statistics.h"
#include"Sort.h"
#include"UniqueRand.h"

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