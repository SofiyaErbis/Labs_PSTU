#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ru");
	cout << "Компьютер задумал число n в диапазоне от 1 до 100" << endl;
	int x = 0 ; 
	int i = 0;
	const int n = rand() % 100;
	const int p = 7;
	while (i < p && x != n) 
	{
		cout << "Попытка " << i + 1  << endl;
		cin >> x;

		if (x > n)
			cout << "Загаданное число меньше" << " " << x << endl;
		if (x < n)
			cout << "Загаданное число больше" << " " << x << endl;
		i++;
	}
	if (x == n)
		cout << "Вы угадали число " << n << endl;
	else
		cout << "Вы не смогли угадать число" << endl;
	return 0;
}