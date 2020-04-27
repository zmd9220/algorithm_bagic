#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string st;
		cin >> st;
		int count = 1;
		int ans = 0;
		for (int i = 0; i < st.size(); i++)
		{
			if (st[i] == 'O')
			{
				ans += count++;
			}
			else // X
			{
				count = 1;
			}
		}
		cout << ans << '\n';
	}
}