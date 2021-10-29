#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;
	int d, e, f;
	int x, y, z;
	int r, s, p;
	cout << "Введите начало промежутка времени (часы, минуты, секунды): ";
	cin >> a >> b >> c;
	cout << "Введите конец промежутка времени (часы, минуты, секунды): ";
	cin >> d >> e >> f;

	r = a * 3600 + b * 60 + c;
	s = d * 3600 + e * 30 + f;
	p = s - r;

	x = p / 3600;
	y = (p - (x * 3600)) / 60;
	z = (p - (x * 3600) - (y * 60));
	cout << x << y << z;

}