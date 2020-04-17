#include <iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/*int N;
	cin >> N;
	cin.ignore();*/
	/*while (N--)
	{*/
	stack<char> b;
	queue<char> q;
	string ex;
	getline(cin, ex);
	ex += '\n';
	int index = 0;
	int size = ex.size();
	while (index != ex.size())
	{
		char a = ex[index];
		bool found = true;
		if (a == '<')
		{
			while (!b.empty())
			{
				cout << b.top();
				b.pop();
			}
			while (true)
			{
				if (ex[index] == '>')
				{
					cout << ex[index];
					index++;
					break;
				}
				cout << ex[index];
				index++;
			}
		}
		else if (a == ' ' || a == '\n') //일반 문자 일 경우
		{
			while (!b.empty())
			{
				cout << b.top();
				b.pop();
			}
			cout << a;
			index++;
		}
		else
		{
			b.push(a);
			index++;
		}
	}
	//}
}
// 24분 3초 걸림 성공