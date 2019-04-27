// task_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Tiles {
public:Tiles(string brand, int size_h, int size_w, int price)
{
	this->brand = brand;
	this->size_h = size_h;
	this->size_w = size_w;
	this->price = price;
}
	   string brand;
	   int size_h, size_w, price;
	   void getData() {
		   cout << "brand of tile: " << brand << endl;
		   cout << "size_h of tile: " << size_h << endl;
		   cout << "size_w of tile: " << size_w << endl;
		   cout << "price of tile: " << price << endl;
	   }
};
int main()
{
	Tiles ceramic("ceramin",10,15,20);
	ceramic.getData();
	Tiles laminate("lamin", 15, 20, 10);
	laminate.getData();
}
