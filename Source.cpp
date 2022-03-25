//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };

	int minRand;
	int maxRand;
	cout << "Введите минимально возможное случайное число: "; cin >> minRand;
	cout << "Введите максимально возможное случайное число: "; cin >> maxRand;

	//arr[2] = 123;
	//cout << "Введите элементы массива(" << n << " шт):";
	for (int i = 0; i < n; i++)
	{
		//cin >> arr[i];
		//arr[i] = rand() % 50 + 50;
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//Вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Поиск минимального и максимального значения:
	int min, max;
	min = max = arr[0];
	


}