#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];
int d[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		d[i] = a[i];
	}
	//a[0] = d[0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j] && d[i] < d[j] + a[i])
				d[i] = d[j] + a[i];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i] > ans)
			ans = d[i];
	}
	cout << ans << '\n';
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
//		for (int j = 0; j<i; j++) {
//			if (a[j] < a[i] && d[j] + a[i] > d[i]) {
//				d[i] = d[j] + a[i];
//			}
//		}
//	}
//	int ans = *max_element(d.begin(), d.end());
//	cout << ans << '\n';
//	return 0;
//}


//#include <stdio.h>
//int a[1000];
//int d[1000];
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i<n; i++) {
//		d[i] = a[i];
//		for (int j = 0; j<i; j++) {
//			if (a[j] < a[i] && d[i] < d[j] + a[i]) {
//				d[i] = d[j] + a[i];
//			}
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

