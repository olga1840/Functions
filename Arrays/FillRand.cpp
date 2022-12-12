#include"FillRand.h"

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

