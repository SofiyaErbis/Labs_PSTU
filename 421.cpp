﻿#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int f; //Инициализация переменной под количество градусов в Фаренгейтах
	cout << "Введите температуру в Фаренгейтах: ";
	cin >> f;//Ввод градусов в Фаренгейтах
	float c; //Инициализация переменной под количество градусов в Цельсиях
	c = (5./9) * (f - 32); //Перевод температуры в градусы Цельсия
	cout << "Эта же температура в градусах Цельсия: " << c;
	return 0;
}
