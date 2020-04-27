#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a)
{
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	a[0] = 1;
	return ans;
}

long long sum2(std::vector<int> a)
{
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	a[0] = 2;
	return ans;
}

int main()
{
	vector<int> v;
	int n;
	cin >> n;
	while (n--)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	long long ans = sum(v);
	cout << ans << '\n';
	return 0;
}