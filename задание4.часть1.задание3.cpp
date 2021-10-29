#include <iostream>
using namespace std;
int main()
{
	const int a = 10;
	int b;
	b = a * 2;
	int c;
	c = b--;
	cout << a << endl;
	cout << c << endl;
	cout << b << endl;
	return 0;
}