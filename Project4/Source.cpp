#include<iostream>
#include<locale.h>
#include<iomanip>
#include<bitset>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	//задание 1
	int arr = 9;
	double* ptr_double_1Darray = new double[arr];


	//задание 2
	double a1[15];
	double* ptr_dyouble = new double[a1];
	for (int a2 = 0;a2 < 15; a2++)
	{

		 cout << "инициализация одномерного массива " << a1 <<  endl;

	}

	//задание 3
	double b1[3][3] = { {1,2,3}, {4,5,6} };
	double* ptr_drouble = new double[b1];
	for (int b2 = 0; b2 < 6; b2++)
	{

		 cout << "инициализация двумерного массива " << b1 + b2 <<  endl;

	}

	//задание 4
	for (;;)

	{

		int* ahhah = new int;

	}







	system("pause");
	return 0;
}
