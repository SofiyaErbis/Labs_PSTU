#include <iostream>
using namespace std;
int main()
{
	const int a = 10; //Инициализация константы
	int b; //Инициализация переменной под второе число
	b = a * 2; //Присвоение значения переменной
	int c;//Инициализация переменной под третье число
	c = b--;//Присвоение значения переменной
	cout << a << endl;
	cout << c << endl;
	cout << b << endl;
	return 0;
}
