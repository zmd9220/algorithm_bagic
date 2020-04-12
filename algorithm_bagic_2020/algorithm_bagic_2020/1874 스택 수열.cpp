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
	stack<int> st; // 차례로 집어넣을 스택
	string str; // + - 출력할 str;
	int max = 0; // 현재 push한 최대 값

	cin >> N;
	while (N--) // test case
	{
		int now; // 매번 받을 값
		
		cin >> now;
		
		if (max > now)
		{
			bool found = false;
			if (!st.empty())
			{
				if (now == st.top())
				{
					st.pop();
					str += '-';
					found = true;
				}
			}
			if (!found)
			{
				cout << "NO\n";
				return 0;
			}
		}
		else
		{
			int a = now - max;
			for (int i = 0; i < a; i++)
			{
				st.push(++max);
				str += '+';
			}
			st.pop();
			str += '-';
		}
	}
	for (auto x : str)
	{
		cout << x << '\n';
	}
	return 0;
}

/*
	
*/