#include"UniqueRand.h"


template<typename T>void UniqueRand(T arr[], const int n)
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
}
template<typename T>void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] != arr[i + 1][j + 1])
			{
				return Print(arr, ROWS, COLS);
			}
		}
	}
}
