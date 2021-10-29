#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int f;
	cout << "Введите температуру в Фаренгейтах: ";
	cin >> f;
	float c;
	c = (5./9) * (f - 32);
	cout << "Эта же температура в градусах Цельсия: " << c;
	return 0;
}
