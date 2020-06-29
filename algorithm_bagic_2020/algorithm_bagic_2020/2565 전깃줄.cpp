//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[501];
//int d[501];
//int main()
//{
//	int n;
//	cin >> n;
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		cin >> a[tmp];
//		d[tmp]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = 1;
//		if (a[i] != 0)
//		{
//			for (int j = 1; j < i; j++)
//			{
//				if (a[j] != 0 && a[i] > a[j])
//					tmp = max(tmp, a[j] + 1);
//			}
//		}
//		d[i] = tmp;
//		if (d[i] > ans)
//			ans = d[i];
//	}
//	cout << n - ans << '\n';
//	return 0;
//}

#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(vector<int> &a, vector<int> &b) {
	return a[0] < b[0];
}

int get_max(int a, int b) { return a > b ? a : b; }

int main() {

	int n, i, j, len = 0;

	scanf("%d", &n);
	vector < vector <int> > v(n);
	int lis[501];
	for (i = 0; i < n; i++) {
		v[i] = vector<int>(2);
		scanf("%d %d", &v[i][0], &v[i][1]);
	}

	sort(v.begin(), v.end(), comp);

	for (i = 0; i < n; i++) {
		lis[i] = 1;
		for (j = 0; j < i; j++) {
			if (lis[j] + 1 > lis[i] && v[i][1] > v[j][1]) lis[i] = lis[j] + 1;
		}
		len = get_max(len, lis[i]);
	}

	printf("%d\n", n - len);
	return 0;
}