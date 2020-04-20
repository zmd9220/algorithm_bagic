#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n%400 == 0)
	{
		cout << "1" << '\n';
	}
	else
	{
		cout << "0" << '\n';
	}
	/*if ((n >= 1 && n <= 5 && n== 50) || n == 5000)
	{
		cout << n << endl;
	}
	else
	{
		cout << n - 1 << endl;
	}*/
}