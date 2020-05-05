#include <iostream>

using namespace std;

int pluses[11];
int oneTwo(int n)
{
	if (pluses[n] == 0)
	{
		pluses[n] = oneTwo(n - 1) + oneTwo(n - 2) + oneTwo(n - 3);
	}
	return pluses[n];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	pluses[0] = 1, pluses[1] = 1, pluses[2] = 2;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << oneTwo(n) << '\n';
	}
}