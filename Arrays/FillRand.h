#pragma once
#include"stdafx.h"
#include"constants.h"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double brr[], const int n, double minRand = 0, double maxRand = 100);
void FillRand(double brr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float crr[], const int n, float minRand = 0, float maxRand = 100);
void FillRand(float crr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char drr[], const int n, char minRand = 0, char maxRand = 100);
void FillRand(char drr[ROWS][COLS], const int ROWS, const int COLS);
