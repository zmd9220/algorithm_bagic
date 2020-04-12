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
	stack<int> st; // ���ʷ� ������� ����
	string str; // + - ����� str;
	int max = 0; // ���� push�� �ִ� ��

	cin >> N;
	while (N--) // test case
	{
		int now; // �Ź� ���� ��
		
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