#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n); // ���� A ����
	vector<int> d(n); // d = LIS
	vector<int> d2(n); // d2 = LDS
	int ans = 0; // ���� �� ������� ����(B)
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		d[i] = 1;
		d2[i] = 1;
	}
	
	// LIS ���ϴ� ����
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j] && d[i] < d[j] + 1)
				d[i] = d[j] + 1;
		}
	}

	// LDS ���ϴ� ����
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

	// B ���ϴ� ����(����)
	for (int i = 0; i < n; i++)
	{
		if(ans < d[i] + d2[i] - 1)
			ans = d[i] + d2[i] - 1;
	}
	cout << ans << '\n';
	return 0;
}