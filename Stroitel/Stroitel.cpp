#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class House
{
public:
	int doors;
	int windows;
	int walls;
	bool roof;
	bool garage;

	House()
	{
		doors=0;
		windows=0;
		walls=0;
		roof=0;
		garage=0;
	}
	void SetDoors(int d)
	{
		doors = d;
	}
	void SetWindows(int w)
	{
		windows = w;
	}
	void SetWalls(int w)
	{
		walls = w;
	}
	void SetRoof(bool r)
	{
		roof = r;
	}
	void SetGarage(bool g)
	{
		garage = g;
	}
};

class Bilder
{
public:
	virtual void BildDoors() = 0;
	virtual void BildWindows() = 0;
	virtual void BildWalls() = 0;
	virtual void BildRoof() = 0;
	virtual void BildGarage() = 0;
};

class BilderHouse:public Bilder
{
	House house1;
public:
	void BildDoors()
	{
		int countd;
		cout << "Введите количество дверей:" << endl;
		cin >> countd;
		house1.SetDoors(countd);
	}
	void BildWindows()
	{
		int countw;
		cout << "Введите количество окон:" << endl;
		cin >> countw;
		house1.SetWindows(countw);
	}

	void BildWalls()
	{
		int countw;
		cout << "Введите количество стен:" << endl;
		cin >> countw;
		house1.SetWalls(countw);
	}

	void BildRoof()
	{
		bool r;
		cout << "Будет ли крыша(1-да,0-нет):" << endl;
		cin >> r;
		house1.SetRoof(r);
	}
	void BildGarage()
	{
		bool g;
		cout << "Будет ли гараж(1-да,0-нет):" << endl;
		cin >> g;
		house1.SetGarage(g);
	}
	BilderHouse()
	{
		BildDoors();
		BildWindows();
		BildWalls();
		BildRoof();
		BildGarage();
	}
	void Getres()
	{
		cout << "Дом из дерева :" << endl;
		cout << "C "<<house1.doors<<" дверьми" << endl;
		cout << "C " << house1.windows << " окнами" << endl;
		cout << "C " << house1.walls << " стенами" << endl;
		if (house1.roof)
		{
			cout << "C крышой" << endl;
		}
		if (house1.garage)
		{
			cout << "C гаражом" << endl;
		}
	}
};

class BilderHouseStone :public Bilder
{
	House house1;
public:
	void BildDoors()
	{
		int countd;
		cout << "Введите количество дверей:" << endl;
		cin >> countd;
		house1.SetDoors(countd);
	}
	void BildWindows()
	{
		int countw;
		cout << "Введите количество окон:" << endl;
		cin >> countw;
		house1.SetWindows(countw);
	}

	void BildWalls()
	{
		int countw;
		cout << "Введите количество стен:" << endl;
		cin >> countw;
		house1.SetWalls(countw);
	}

	void BildRoof()
	{
		bool r;
		cout << "Будет ли крыша(1-да,0-нет):" << endl;
		cin >> r;
		house1.SetRoof(r);
	}
	void BildGarage()
	{
		bool g;
		cout << "Будет ли гараж(1-да,0-нет):" << endl;
		cin >> g;
		house1.SetGarage(g);
	}

	BilderHouseStone()
	{
		BildDoors();
		BildWindows();
		BildWalls();
		BildRoof();
		BildGarage();
	}
	void Getres()
	{
		cout << "Дом из камня :" << endl;
		cout << "C " << house1.doors << " дверьми" << endl;
		cout << "C " << house1.windows << " окнами" << endl;
		cout << "C " << house1.walls << " стенами" << endl;
		if (house1.roof)
		{
			cout << "C крышой" << endl;
		}
		if (house1.garage)
		{
			cout << "C гаражом" << endl;
		}
	}
};

class BilderHouseGold :public Bilder
{
	House house1;
public:
	void BildDoors()
	{
		int countd;
		cout << "Введите количество дверей:" << endl;
		cin >> countd;
		house1.SetDoors(countd);
	}
	void BildWindows()
	{
		int countw;
		cout << "Введите количество окон:" << endl;
		cin >> countw;
		house1.SetWindows(countw);
	}

	void BildWalls()
	{
		int countw;
		cout << "Введите количество стен:" << endl;
		cin >> countw;
		house1.SetWalls(countw);
	}

	void BildRoof()
	{
		bool r;
		cout << "Будет ли крыша(1-да,0-нет):" << endl;
		cin >> r;
		house1.SetRoof(r);
	}
	void BildGarage()
	{
		bool g;
		cout << "Будет ли гараж(1-да,0-нет):" << endl;
		cin >> g;
		house1.SetGarage(g);
	}
	BilderHouseGold()
	{
		BildDoors();
		BildWindows();
		BildWalls();
		BildRoof();
		BildGarage();
	}
	void Getres()
	{
		cout << "Дом из золота :" << endl;
		cout << "C " << house1.doors << " дверьми" << endl;
		cout << "C " << house1.windows << " окнами" << endl;
		cout << "C " << house1.walls << " стенами" << endl;
		if (house1.roof)
		{
			cout << "C крышой" << endl;
		}
		if (house1.garage)
		{
			cout << "C гаражом" << endl;
		}
	}
};

void main()
{
	setlocale(0, "rus");
	cout << "----------------МЕНЮ _ПО_СОЗДАНИЮ_ДОМА-----------------------" << endl << endl;
	char matiral;
	cout << "Выберите материал: (g-золото,s-камень,d-дерево)" << endl;
	cin >> matiral;
	switch (matiral)
	{

	case'g':
	{
		BilderHouseGold gold;
		gold.Getres();
		break;
	}

	case's':
	{
		BilderHouseStone stone;
		stone.Getres();
		break;
	}

	case'd':
	{
		BilderHouse derevo;
		derevo.Getres();
		break;
	}
	default:
	{
		cout << "Вы ввели не вверные данные" << endl;
		break;
	}

	}
}