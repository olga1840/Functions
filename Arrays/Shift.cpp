#include"Shift.h"

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
{	//выполняет циклический сдвиг массива влево
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
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
	{
		T buffer = arr[0][0];
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
