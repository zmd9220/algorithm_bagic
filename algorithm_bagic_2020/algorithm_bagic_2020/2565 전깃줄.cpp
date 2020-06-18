#include <iostream>
#include <algorithm>
using namespace std;

int a[501];
int d[501];
int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int tmp;
		cin >> tmp;
		cin >> a[tmp];
		d[tmp]++;
	}
	for (int i = 1; i <= n; i++)
	{
		int tmp = 1;
		if (a[i] != 0)
		{
			for (int j = 1; j < i; j++)
			{
				if (a[j] != 0 && a[i] > a[j])
					tmp = max(tmp, a[j] + 1);
			}
		}
		d[i] = tmp;
		if (d[i] > ans)
			ans = d[i];
	}
	cout << n - ans << '\n';
	return 0;
}