#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int F[1000001] = { 0 };
// N�� 100���̹Ƿ� �ð����⵵ N2�̻��� ����ϱ� ����(�ð�����1�� �ʰ� ���ɼ��� �ſ� ����)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);
	vector<int> ans(N);
	stack<int> st;
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		v[i] = A;
	}

	st.push(0);
	for (int i = 1; i < N; i++)
	{
		if (st.empty())
		{
			st.push(i);
		}
		while (!st.empty() && v[st.top()] < v[i])
		{
			ans[st.top()] = v[i];
			st.pop();
		}
		st.push(i);
	}

	while (!st.empty())
	{
		ans[st.top()] = -1;
		st.pop();
	}

	for (int i = 0; i < N; i++)
	{
		cout << ans[i] << " ";
	}

	cout << '\n';
	return 0;
}