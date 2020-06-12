#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n); // 기존 A 수열
	vector<int> d(n); // d = LIS
	vector<int> d2(n); // d2 = LDS
	int ans = 0; // 가장 긴 바이토닉 수열(B)
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		d[i] = 1;
		d2[i] = 1;
	}
	
	// LIS 구하는 과정
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j] && d[i] < d[j] + 1)
				d[i] = d[j] + 1;
		}
	}

	// LDS 구하는 과정
	reverse(a.begin(), a.end());
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j] && d2[i] < d2[j] + 1)
				d2[i] = d2[j] + 1;
		}
	}
	reverse(d2.begin(), d2.end());

	// B 구하는 과정(정답)
	for (int i = 0; i < n; i++)
	{
		if(ans < d[i] + d2[i] - 1)
			ans = d[i] + d2[i] - 1;
	}
	cout << ans << '\n';
	return 0;
}