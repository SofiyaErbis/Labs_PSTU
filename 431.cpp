#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float x, y; //Инициализация переменных под числа, которые требуется перемножить
	cout << "Введите числа: " << endl;
	cin >> x >> y;//Ввод чисел
	cout << "Результат умножения:" << x * y;//Вывод результата умножения
	return 0;
}
