#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> st;
	string str;
	int ans = 0;
	// ������ �ľǿ� ī��Ʈ �ʿ�
	int cnt = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		char x = str[i];
		if (x == '(')
		{
			if (str[i + 1] == ')')
			{
				ans += st.size();
				i += 1;
			}
			else
			{
				st.push(x);
				ans++;
			}
		}
		else
		{
			st.pop();
		}
	}
	cout << ans << '\n';
}

// 30������ �ɸ���?