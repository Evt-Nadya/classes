// task_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
class Children {
private:
string name, surname;
	int age;
public:
	Children()
	{
		name = "temp";
		surname = "temp";
		age = 0;
	}
	void setData()
	{
		cout << "enter children name" << endl;
		cin >> name;
		cout << "enter children surname" << endl;
		cin >> surname;
		cout << "enter children age" << endl;
		cin >> age;
	}
	void getData()
	{
		cout << "name of children: " << name << endl;
		cout << "surname of children: " << surname << endl;
		cout << "age of children: " << age << endl;
	}
};
int main()
{
	Children first;
	first.setData();
	first.getData();
	Children second;
	second.setData();
	second.getData();
}