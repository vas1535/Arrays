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
	cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
	cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;

	//arr[2] = 123;
	//cout << "������� �������� �������(" << n << " ��):";
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
	//����� ������� �� ����� � �������� �������:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������������ � ������������� ��������:
	int min, max;
	min = max = arr[0];
	


}