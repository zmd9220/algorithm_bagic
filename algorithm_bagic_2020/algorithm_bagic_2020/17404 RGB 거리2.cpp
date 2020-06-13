#include <iostream>
#include <algorithm>
using namespace std;


int a[1001][3]; // 0,1,2 = R,G,B
int d[1001][3];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	int ans = 1000 * 1000 + 1;
	for (int k = 0; k <= 2; k++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (k == j)
				d[1][j] = a[1][j];
			else {
				d[1][j] = 1000 * 1000 + 1;
			}
		}

		for (int i = 2; i <= n; i++)
		{
			d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
			d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
			d[i][2] = min(d[i - 1][1], d[i - 1][0]) + a[i][2];
		}
		for (int i = 0; i <= 2; i++)
		{
			if (i == k)
				continue;
			ans = min(ans, d[n][i]);
		}
	}
	cout << ans << '\n';
	return 0;
}