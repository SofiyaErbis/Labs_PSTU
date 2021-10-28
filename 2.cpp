#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	cout << "Введите число в диапазоне от 100 до 999: " ;
	int x;
	cin >> x;
	int a = x / 100;
	int z = x % 100;
	int b = z / 10;
	int s = x % 10;
	int c = s % 10;

	if ((a != b) && (a != c) && (b != c))
	{
		{
			cout << a << b << c << endl;
			cout << a << c << b << endl;
			cout << b << a << c << endl;
			cout << b << c << a << endl;
			cout << c << a << b << endl;
			cout << c << b << a << endl;
		}

		if ((a > b) && (a > c)) 
		{
			if (b > c)  
				cout << "Максимальная комбинация:  " << a << b << c << endl; 
			else
				cout << "Максимальная комбинация: " << a << c << b << endl;	
		}
		if ((b > a) && (b > c)) 
		{
			if (a > c)  
				cout << "Максимальная комбинация: " << b << a << c << endl; 
			else
				cout << "Максимальная комбинация: " << b << c << a << endl;
		}
		if ((c > b) && (c > a)) 
		{
			if (a > b)  
				cout << "Максимальная комбинация: " << c << a << b << endl; 
			else
				cout << "Максимальная комбинация: " << c << b << a << endl;
		}
	}
	else  cout << "Число не удовлетворяет условию"; 
	return 0;
}
