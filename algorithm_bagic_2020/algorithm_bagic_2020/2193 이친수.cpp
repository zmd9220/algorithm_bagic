#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long d[91][2] = { 0 };
	d[1][1] = 1;
	d[2][1] = 0;
	d[2][0] = 1;
	for (int i = 3; i <= n; i++)
	{
		d[i][0] = d[i - 1][0] + d[i - 1][1];
		d[i][1] = d[i - 1][0];
	}
	cout << d[n][0] + d[n][1] << '\n';
}