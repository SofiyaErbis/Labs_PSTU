﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x;//Инициализация переменной под число галлонов
	double g = 7.481; //Переменная для перевода в кубические футы
	double a; //Переменная под число футов
	cout << "Число галлонов: ";
	cin >> x; //Ввод числа галлонов
	a = x / g; //Перевод из галлонов в футы
	cout << "Объем числа галлонов в кубических футах: " << a;
	return 0;
}
