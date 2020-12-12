#include<iostream>
#include<locale.h>
#include<iomanip>
#include<bitset>
#include<string>
using namespace std;


/*class Dreadnought
{
	private:
		//свойства
		double hull_points = 14000;

		double crew = 564;

		double jump_range = 500;

		double laser_damage_persec = 70;

		double Kinetic_damage_perhit = 85;

		double Railgun_damage_perhit = 150;

		double Rocket_damage_perhit = 115;

		double laser_overheat_persec = 15;

		double Kinetic_overheat_persec = 5;

		double Railgun_overheat_pershot = 45;

		double Rocket_overheat_pershot = 10;


		//инкапсуляция
		bool CheckSystem()
		{
			return false;
		}





	public:

		int Price;

		string name;

		double weapons_on_board = 24;

		string weapon_class;





		void print()
		{
			//Инкапсуляция
			bool SystemStatus = CheckSystem();
			if (SystemStatus)
			{
				cout << "\nSystem status normal\n" << endl;
			}
			else
			{
				cout << "\nSystem malfunction detected\n" << endl;
			}
			
			
		cout << "\n\tWeapon damage " << "\n\nLaser damage = " << laser_damage_persec << "\n\nKinetic damage = " << Kinetic_damage_perhit << "\n\nRailgun damage = " << Railgun_overheat_pershot << "\n\nRocket damage = " << Rocket_damage_perhit << endl;

		cout << "\n\tWeapon overheating " << "\n\nLaser overheat = " << laser_overheat_persec << "\n\nKinetic overheat = " << Kinetic_overheat_persec << "\n\nRailgun overheat = " << Railgun_overheat_pershot << "\n\nRocket overheat = " << Rocket_overheat_pershot << endl;
		}
		
};
//пустой класс
class CMDR_Rank
{
private:

public:

	void dynamic()
	{
		int size = 10;

		int* arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cout << arr + i << endl;
		}

		delete[] arr;

	};

};







class Station_coords
{

	private:
		
		int x;

		int y;

		int z;


	public:
		
		
		//перегрузка конструктора
		Station_coords()
		{
			x = 3;
			y = 2;
			z = 1;
		}

		//Конструктор

		Station_coords(int ValuesX, int ValuesY, bool Boolean)
		{
			x = ValuesX;
			y = ValuesY;
			if (Boolean)
			{
				z = 1;
			}
			else
			{
				z = 0;
			}
		}
		//пустой конструктор
		Station_coords (int ValueX, int ValueY, int ValueZ)
		{
			x = ValueX;
			y = ValueY;
			z = ValueZ;		
		}


		int GetXYZ()
		{
			return x;
			return y;
			return z;
		}

		void SetXYZ(int valueX, int valueY, int valueZ)
		{
			x = valueX;
			y = valueY;
			z = valueZ;
		}


		void Print()
		{
			cout << "X = " << x << "\t Y = " << y << "\t Z = " << z << endl;
		}




};

class allah
{	
private:
	int* data;

public:
	//конструктор
 	allah(int size)
	{
		data = new int [size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Объект " << data << "\nВызов конструктор\n" << endl;
	}
	//деструктор
	~allah()
   	{
		delete[] data;
		cout << "Объект " << data << "\nВызов деструктор\n" << endl;
	}

};


//(не работает)
void ahhahh()
{
	cout << "Ahhahh Начало операции" << endl;

 	allah kavo(5);
	allah cho(15);
	allah jojo(228);
	

	cout << "Ahhahh Конец операции" << endl;

}







int main()
{
	setlocale(LC_ALL, "Russian");

	CMDR_Rank lll;
	lll.dynamic();

	//перегрузка конструктора
	Station_coords AAAA;
	AAAA.Print();

	Station_coords B(22, 1, false);
	B.Print();
	
	
	//Конструктор
	Station_coords Fed_Capital(13, 23, 3);
	Fed_Capital.Print();

	Station_coords Imp_Capital(31, 1, 3);
	Imp_Capital.Print();

	Station_coords All_Capital(27, 2, 15);
	All_Capital.Print();




	Dreadnought Farragut;

	Farragut.Price = 10000000;
	Farragut.name = "\nISS Federation";
	Farragut.weapon_class = "\nRocket, Kinetic";
	Farragut.print();





	Dreadnought Interdictor;

	Interdictor.Price = 12000000;
	Interdictor.name = "\nINS Duval";
	Interdictor.weapon_class = "\nLaser, Railgun";
	


	return 0;
}

*/






