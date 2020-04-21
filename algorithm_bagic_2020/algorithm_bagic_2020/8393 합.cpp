#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int m = n;
	for (int i = 1; i < m; i++)
	{
		n += i;
	}
	cout << n << '\n';
	return 0;
}