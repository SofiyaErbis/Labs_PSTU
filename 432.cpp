#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char a, b, c, d, e;
	cout << "Введите символы:" << endl;
	cin >> a >> b >> c >> d >> e;
	cout << "Обратная последовательнсоть:" << endl;
	cout << e << endl;
	cout << d << endl;
	cout << c << endl;
	cout << b << endl;
	cout << a << endl;
	return 0;
}