#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	cin >> n >> x;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (x > a)
		{
			v.push_back(a);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << '\n';
	return 0;
}