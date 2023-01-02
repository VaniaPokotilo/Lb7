#include <iostream>
using namespace std;


int coutArr(int arr[], const int size);

int minArr(int arr[], const int size);

int maxArr(int arr[], const int size);

int SumArr(int arr[], const int size);



int main()
{
	const int size = 15;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 101;
	}

	coutArr(arr, size);
	cout << endl << "Min: " << minArr(arr, size) << endl;
	cout << "Max: " << maxArr(arr, size) << endl;
	cout << "Sum: " << SumArr(arr, size) << endl;
}

int coutArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	return arr[size];
}


int minArr(int arr[], const int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int maxArr(int arr[], const int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int SumArr(int arr[], const int size)
{
	int sum = arr[0];
	for (int i = 1; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}