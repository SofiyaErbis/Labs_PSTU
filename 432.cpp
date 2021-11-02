#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char a, b, c, d, e;//Инициализация переменных под вводимые символы
	cout << "Введите символы:" << endl;
	cin >> a >> b >> c >> d >> e;//Ввод символов
	cout << "Обратная последовательнсоть:" << endl;
	cout << e << endl;
	cout << d << endl;
	cout << c << endl; //Вывод обратной последовательности
	cout << b << endl;
	cout << a << endl;
	return 0;
}
