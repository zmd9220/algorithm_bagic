#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int F[1000001] = { 0 };
int an[1000001] = { 0 };
// N�� 100���̹Ƿ� �ð����⵵ N2�̻��� ����ϱ� ����(�ð�����1�� �ʰ� ���ɼ��� �ſ� ����)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		an[i] = A;
		F[A]++;
	}

	for (int i = 0; i < N; i++)
	{
		int now = an[i];
		bool found = false;
		for (int j = i+1; j < N; j++)
		{
			int next = an[j];
			if (F[now] < F[next])
			{
				cout << an[j] << " ";
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << -1 << " ";
		}
	}
	/*while (N--)
	{
		int A;
		cin >> A;
		q.push(A);
		F[A]++;
	}
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		bool found = false;
		for (int i = 0; i < q.size(); i++)
		{
			int next = q.front();

			if (F[now] < F[next])
			{
				cout << next << " ";
				found = true;
			}
			q.pop();
			q.push(next);

		}
		if (!found)
		{
			cout << -1 << " ";
		}
	}*/
	cout << '\n';
	return 0;
}
