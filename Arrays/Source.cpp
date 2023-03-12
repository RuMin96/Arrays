#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int sum=0;
	int arr[n];
	for (int i = 0; i <n; i++)
	{
		cout << "Введите элементы массива:";
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "Сумма всех занчений массива = " << sum << endl;
	cout << "Среднее арифметическое элементов массива = " << (double)sum / n << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++ )
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}

