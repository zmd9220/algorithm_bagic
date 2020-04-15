#include <iostream>
#include <queue>
#include <string>
using namespace std;

// 큐로 요세푸스 수열 문제 풀어보기
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	int cnt = 1;
	queue<int> q1;
	//queue<int> q2;
	string str;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		q1.push(i + 1);
		/*if (cnt != K)
		{
			q1.push(i + 1);
			cnt++;
		}*/
		/*else
		{
			str += char(i + 1);
			cnt = 1;
		}*/
	}

	cout << "<";
	while (!q1.empty()) //!empty 안비면1 비면0 
	{
		int a = q1.front();
		if (cnt != K)
		{
			q1.pop();
			q1.push(a);
			cnt++;
		}
		else
		{
			cnt = 1;
			q1.pop();
			if (!q1.empty())
			{
				cout << a << ", ";
			}
			else
			{
				cout << a;
			}

		}
	}
	
	/*while (q1.empty() && q2.empty())
	{
		if (!q1.empty())
		{
			while (q1.empty())
			{
				int a = q1.front();
				if (cnt != K)
				{
					
					q1.pop();
					q2.push(a);
					cnt++;
				}
				else
				{
					str += a;
					cnt = 1;
				}
			}
		}*/
		/*else
		{
			while (q2.empty())
			{
				int a = q2.front();
				if (cnt != K)
				{

					q2.pop();
					q1.push(a);
					cnt++;
				}
				else
				{
					str += a;
					cnt = 1;
				}
			}
		}*/
	//}
	/*for (auto x : str)
	{
		if (x == str.back())
		{
			cout << x;
		}
		else
		{
			cout << x << ", ";
		}
	}*/
	cout << ">\n";

}