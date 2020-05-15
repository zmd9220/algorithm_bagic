#include <iostream>
#include <vector>
using namespace std;

int d[100001];
int ans[100001];

int recursion(int i)
{
	if (ans[i] != 0) // 값이 있음
	{
		return ans[i];
	}
	else
	{
		ans[i] = recursion(i - 1) + d[i];
		if (ans[i - 1] + d[i] < d[i])
			ans[i] = d[i];
		return ans[i];
	}
}

void topDown(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (ans[i - 1] + d[i] > d[i])
		{
			ans[i] = ans[i - 1] + d[i];
		}
		else
			ans[i] = d[i];
	}
	return;
}

int main()
{
	int n;
	cin >> n;
	int answer = -5000;
	for (int i = 0; i < n; i++)
	{
		cin >> d[i];
		if (i == 0)
			ans[i] = d[i];
	}
	//topDown(n);
	recursion(n);
	for (int i = 0; i < n; i++)
	{
		if (answer < ans[i])
			answer = ans[i];
	}
	cout << answer << '\n';
}



//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	for (int i = 0; i<n; i++) {
//		cin >> a[i];
//	}
//	vector<int> d(n);
//	for (int i = 0; i<n; i++) {
//		d[i] = a[i];
//		if (i == 0) continue;
//		if (d[i] < d[i - 1] + a[i]) {
//			d[i] = d[i - 1] + a[i];
//		}
//	}
//	int ans = d[0];
//	for (int i = 1; i<n; i++) {
//		if (ans < d[i]) {
//			ans = d[i];
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}


//#include <stdio.h>
//int a[100000];
//int d[100000];
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i<n; i++) {
//		d[i] = a[i];
//		if (i == 0) continue;
//		if (d[i] < d[i - 1] + a[i]) {
//			d[i] = d[i - 1] + a[i];
//		}
//	}
//	int ans = d[0];
//	for (int i = 0; i<n; i++) {
//		if (ans < d[i]) {
//			ans = d[i];
//		}
//	}
//	printf("%d\n", ans);
//	return 0;
//}