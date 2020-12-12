#include<iostream>
#include<locale.h>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	FILE* ptrFile = 0;
	fopen_s(&ptrFile, "file.txt", "rb");
	if (ptrFile == NULL) perror("Ошибка открытия файла");
	else
	{
		while (!feof(ptrFile)) // повторять цикл, пока не конец файла
		{
			char buffer[100] = { 0 };
			fgets(buffer, 100, ptrFile);
			std::cout << buffer;
		}
		fclose(ptrFile); // закрыть файл
	}









	int int_a = 15;
	int int_b = 7;
	double double_a = 15.0;
	double double_b = 7.0;

	 cout << "int 15/int 7" << int_a / int_b <<  endl;
	 cout << "double 15/int 7" << double_a / int_b <<  endl;
	 cout << "int 15/double 7" << int_a / double_b <<  endl;
	 cout << "double 15/double 7" << double_a / double_b <<  endl;





	double x1 = 15.6;
	double x2 = 15.4;

	int C = 15;
	 cout << (double)C / (double)7;
	 cout << 15.0 / 7.0 <<  endl;
	 cout << "round(15.6) = " << round(x1) <<  endl; // 16
	 cout << "round(15.4) = " << round(x2) <<  endl; 

	 cout << "ceil(15.6) = " << ceil(x1) <<  endl; // 16
	 cout << "ceil(15.4) = " << ceil(x2) <<  endl; 
	 cout << "floor(15.6) = " << floor(x1) <<  endl; //15
	 cout << "floor(15.4) = " << floor(x2) <<  endl; 


	 void ar();
	 {



	 }


	 int gigi = 20;
	int int_val = 15;
	 cout << static_cast<float>(int_val) / 2; // печатает 7.5
	/* cout << reinterpret_cast<int>(gigi) / 2;
	 cout << dynamic_cast<float>(int_val) / 2; //разобрать эту какаху
	 cout << reinterpret_cast<float>(int_val) / 2;*/







	return 0;
}