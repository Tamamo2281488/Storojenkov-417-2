#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<bitset>
#include<string>
#include<ctime>
using namespace std;


/*int main()
{
    setlocale(LC_ALL, "Russian");


    const int ROW = 5;
    const int COL = 8;

    int arr[ROW][COL];
    

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }


 
    return 0;
}*/

void roro()
{
    setlocale(LC_ALL, "ru");

    const int A = 3;
    const int B = 3;

    int arr[A][B];


    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            arr[A][B] = rand() % 10;
        }
        cout << endl;
    }






}



















































































/*int kavo(int nomer)
{
    if (nomer == 0)
        return 0;
    if (nomer == 1)
        return 1; 
    return kavo(nomer - 1) + kavo(nomer - 2);
}






int Kadr(int E)
{
    if (E == 0)

        return 0;

    if (E == 1)

        return 1;

        return E * Kadr(E - 1);

}





int main()
{
    for (int i = 0; i < 17; ++i)
         cout << kavo(i) << " " << endl;


    cout << "Rekursivnaya functia - " << Kadr(5) << endl;


  
}

int bynom_00(int m, int n);
int bynom_00(int m, int n)
{
    if (m == 0 || m == n || n == 0) return 1;
    else return bynom_00(m, n - 1) + bynom_00(m - 1, n - 1);
}

int mail(void)
{
    setlocale(LC_ALL, "Russian");
    int a, b;

    for (int i = 0; i < 14; ++i)
         cout << Kadr(i) << " " <<  endl;

     cout << "\n rekursivnaya funktia = " << Kadr(12) <<  endl;
     cout << "Vvedite a i b:\n" <<  endl;
     cin >> a;
     cin >> b;
     cout << "Ответ \n" << bynom_00(a, b) <<  endl;
    return 0;
}*/
