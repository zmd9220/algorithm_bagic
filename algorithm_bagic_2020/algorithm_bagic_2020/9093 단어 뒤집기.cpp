#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	cin.ignore();
	while (N--)
	{
		stack<char> b;
		string ex;
		getline(cin, ex);
		ex += '\n';
		for (char a : ex)
		{
			if (a == ' ' || a == '\n') //일반 문자 일 경우
			{
				while (!b.empty())
				{
					cout << b.top();
					b.pop();
				}
				cout << a;
			}
			else 
			{
				b.push(a);
			}
		}
	}
}