﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c; //Инициализация переменных под начало промежутка
	int d, e, f; //Инициализация переменных под конец промежутка
	int x, y, z; //Инициализация переменных под продолжительность промежутка
	int r, s, p; //Иниализация переменных для перевода времени
	cout << "Введите начало промежутка времени (часы, минуты, секунды): ";
	cin >> a >> b >> c;
	cout << "Введите конец промежутка времени (часы, минуты, секунды): ";
	cin >> d >> e >> f;

	r = a * 3600 + b * 60 + c; //Перевод начала промежутка в секунды
	s = d * 3600 + e * 60 + f;//Перевод конца промежутка в секунды
	p = s - r;//Разница между промежутками

	x = p / 3600; //Перевод в часы
	y = (p - (x * 3600)) / 60;//Перевод в минуты
	z = (p - (x * 3600) - (y * 60));//Перевод в секунды
	cout << x << y << z;

}
