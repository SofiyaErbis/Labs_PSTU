#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	float b, x1, x2, y1, y2, z1, z2;
	cout << "Тип float. Введите а и b" << endl;
	cin >> a >> b;

	cout << "Пример: ((a-b)^4-(a^4-*a^3*b-6*a^2*b^2))/(b^4-4*a*b^3)" << endl;

	x1 = a - b;
	cout << "1: (a-b) = " << x1 << endl;

	x2 = pow(x1, 4);
	cout << "2: (a-b)^4 = " << x2 << endl;

	y1 = pow(a, 4) - 4 * pow(a, 3) * b + 6 * pow(a, 2) * pow(b, 2);
	cout << "3: a^4-*a^3*b-6*a^2*b^2 = " << y1 << endl;

	y2 = x2 - y1;
	cout << "4: (a-b)^4-(a^4-*a^3*b-6*a^2*b^2) = " << y2 << endl;

	z1 = pow(b, 4) - 4 * a * pow(b, 3);
	cout << "5: b^4-4*a*b^3 = " << z1 << endl;

	z2 = y2 / z1; 
	cout << "6: ((a-b)^4-(a^4-*a^3*b-6*a^2*b^2))/(b^4-4*a*b^3) = " << z2 << endl;
	return 0;
}