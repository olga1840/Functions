#include<iostream>
using namespace std;

int Search(int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";
	}
	cout << "Повторяющиеся элементы массива: " << Search(arr, n) << endl;
}

int Search(int arr[], const int n)
{
	int a = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << arr[i];
				for (int i = 0; i < n; i++)
				{
					a += arr[i];
				}
				return a;
				cout << endl;
				
			}

			else
			{
				cout << "Повторяющиеся значения среди элементов массива не найдены" << endl;
			}

			

		}
	}

}



