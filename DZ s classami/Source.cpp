#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
#include<fstream>
#include<locale.h>
#include<iomanip>
#include<bitset>
#include<string>
#include<ctime>
using namespace std;





class Matrix
{
private:

    int Msize, Nsize;
    double** arr;

public:

    void create();
    void print();
    double** get_arr();

    Matrix operator + (Matrix&);

};



void Matrix::create()
{
    cout << "Введите размер матрицы M N: ";
    cin >> Msize >> Nsize;

    //Создаётся динамический массив arr размера M,N
    arr = new double* [Msize];
    for (int ind = 0; ind < Msize; ind++)
        arr[ind] = new double[Nsize];

    //Заполняется динамический массив arr размера M,N
    cout << "Введите элементы матрицы:" << endl;
    for (int ind_m = 0; ind_m < Msize; ind_m++)
        for (int ind_n = 0; ind_n < Nsize; ind_n++)
            cin >> arr[ind_m][ind_n];

}

void Matrix::print()
{
    //Выводит динамический массив arr размера M,N
    cout << endl << "Элементы матрицы:" << endl;
    for (int ind_m = 0; ind_m < Msize; ind_m++)
    {
        cout << endl;
        for (int ind_n = 0; ind_n < Nsize; ind_n++)
            cout << arr[ind_m][ind_n] << " ";
    }

    cout << endl;
}

Matrix Matrix::operator + (Matrix& mtx)
{
    Matrix res;

    if (this->Nsize != mtx.Msize) //Проверка на совместимость
    {
        res.arr = NULL;
        return res;
    }

    int ms = this->Msize;
    int ns = mtx.Nsize;
    int ks = mtx.Msize;

    res.Msize = ms;
    res.Nsize = ns;
    res.arr = new double* [ms];
    for (int ind = 0; ind < ms; ind++)
        res.arr[ind] = new double[ns];

    for (int ind_m = 0; ind_m < ms; ind_m++)
        for (int ind_n = 0; ind_n < ns; ind_n++)
        {
            res.arr[ind_m][ind_n] = 0;

            for (int ind_k = 0; ind_k < ks; ind_k++)
                res.arr[ind_m][ind_n] += this->arr[ind_m][ind_k] * mtx.arr[ind_n][ind_k];
        }

    return res;
}

double** Matrix::get_arr()
{
    return arr;
}





int main()
{
    setlocale(LC_ALL, "ru");
    Matrix mtx1, mtx2;
    mtx1.create();
    mtx1.print();
    mtx2.create();
    mtx2.print();

    Matrix mtx3 = mtx1 + mtx2;

    if (mtx3.get_arr() == NULL)
    {
        cout << "Матрицы не совместимы" << endl;
        return 1;
    }

    mtx3.print();

    return 0;
}
