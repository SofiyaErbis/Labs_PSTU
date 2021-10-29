#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x;
	double g = 7.481;
	double a;
	cout << "Число галлонов: ";
	cin >> x;
	a = x / g;
	cout << "Объем числа галлонов в кубических футах: " << a;
	return 0;
}