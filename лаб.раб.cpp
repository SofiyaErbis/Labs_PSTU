#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ru");
	int n, m;
	cout << "Введите n и m" << endl;
	cin >> n >> m ;
	cout << "1) n++ - m = " << n++ - m << endl;
	cout << "2) m-- > n = " << (m-- > n) << endl;
	cout << "3) n-- > m = " << (n-- > m) << endl;
	return 0;
}