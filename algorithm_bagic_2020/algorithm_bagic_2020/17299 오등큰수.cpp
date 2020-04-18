#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int F[1000001] = { 0 };
int an[1000001] = { 0 };
int rd[1000001] = { 0 };
// N�� 100���̹Ƿ� �ð����⵵ N2�̻��� ����ϱ� ����(�ð�����1�� �ʰ� ���ɼ��� �ſ� ����)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int> st;
	queue<int> q;
	int N;
	int cnt = 1;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		an[i] = A;
		F[A]++;
	}
	st.push(0);
	for (int i = 1; i < N; i++)
	{
		if (st.empty())
		{
			st.push(i);
		}

		while (!st.empty() && F[an[st.top()]] < F[an[i]])
		{

			rd[st.top()] = an[i];
			st.pop();

		}
		st.push(i);
	}
	while (!st.empty())
	{
		int index = st.top();
		rd[index] = -1;
		st.pop();
	}
	for (int i = 0; i < N; i++)
	{
		cout << rd[i] << " ";
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

// ����
//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//int freq[1000001];
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	vector<int> ans(n);
//	for (int i = 0; i<n; i++) {
//		cin >> a[i];
//		freq[a[i]] += 1;
//	}
//	stack<int> s;
//	s.push(0);
//	for (int i = 1; i<n; i++) {
//		if (s.empty()) {
//			s.push(i);
//		}
//		while (!s.empty() && freq[a[s.top()]] < freq[a[i]]) {
//			ans[s.top()] = a[i];
//			s.pop();
//		}
//		s.push(i);
//	}
//	while (!s.empty()) {
//		ans[s.top()] = -1;
//		s.pop();
//	}
//	for (int i = 0; i<n; i++) {
//		cout << ans[i] << ' ';
//	}
//	cout << '\n';
//	return 0;
//}
