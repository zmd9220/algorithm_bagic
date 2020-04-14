#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	stack<char> lst;
	stack<char> rst;
	cin >> str;
	for (auto x : str)
	{
		lst.push(x);
	}
	int M;
	cin >> M;
	while (M--)
	{
		char cmd;
		cin >> cmd;
		if (cmd == 'P')
		{
			char c;
			cin >> c;
			lst.push(c);
		}
		else if (cmd == 'L')
		{
			if (!lst.empty())
			{
				char c = lst.top();
				rst.push(c);
				lst.pop();
			}
		}
		else if (cmd == 'B')
		{
			if (!lst.empty())
			{
				lst.pop();
			}
		}
		else
		{
			if (!rst.empty())
			{
				char c = rst.top();
				lst.push(c);
				rst.pop();
			}
		}
	}
	while (!lst.empty()) //empty = 비었으면 true,1 안비었으면 false,0 !은 역이므로 비었으면 0, 안 비었으면1
	{
		char c = lst.top();
		rst.push(c);
		lst.pop();
	}
	while (!rst.empty())
	{
		cout << rst.top();
		rst.pop();
	}
	cout << '\n';
	return 0;
}