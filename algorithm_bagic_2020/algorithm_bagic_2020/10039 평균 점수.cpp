#include <iostream>

using namespace std;

int main()
{
	int n = 5;
	int ans = 0;
	while (n--)
	{
		int std;
		cin >> std;
		if (std < 40)
		{
			std = 40;
		}
		ans += std;
	}
	cout << ans / 5 << '\n';
}