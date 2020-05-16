#include <iostream>

using namespace std;

int d[1001][10];
int de = 10007;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++)
	{
		d[0][i] = 1;
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				d[i][j] += d[i - 1][k];
				d[i][j] %= de;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i <= 9; i++)
	{
		ans += d[n-1][i];
		ans %= de;
	}
	cout << ans << '\n';
	

}