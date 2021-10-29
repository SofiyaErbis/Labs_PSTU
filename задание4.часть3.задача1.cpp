#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float x, y;
	cout << "Введите числа: " << endl;
	cin >> x >> y;
	cout << "Результат умножения:" << x * y;
	return 0;
}