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
		stack<char> st;
		string a;
		getline(cin, a);

		bool found = true;
		int b = a.size();
		if (b % 2 == 1) // 홀수 일 경우
		{
			cout << "NO\n";
			continue;
		}

		//a += '\n';

		for (char c : a)
		{
			if (c == '(')
			{
				st.push(c);
			}
			else if (c == ')') // ')' 일 경우
			{
				if (st.empty()) // 비어있으면
				{
					cout << "NO\n";
					found = false;
					break;
				}
				else
				{
					st.pop(); //짝꿍 만남
				}
			}
			/*else
			{
				cout << c;
			}*/
		}
		if (found == true)
		{
			if (!st.empty())
			{
				cout << "NO\n";
			}
			else
			{
				cout << "YES\n";
			}
		}
	}
}