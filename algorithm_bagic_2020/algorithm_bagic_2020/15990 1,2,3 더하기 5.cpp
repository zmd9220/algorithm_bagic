#include <iostream>

using namespace std;

long long de = 1000000009LL;
long long d[100001][4];
//int ans[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= 100000; i++)
	{

			if (i < 1)
				d[i][1] = 0;
			else if (i == 1)
				d[i][1] = 1;
			else
			{
				d[i][1] = d[i - 1][2] + d[i - 1][3];
				
			}
			if (i < 2)
				d[i][2] = 0;
			else if (i==2)
				d[i][2] = 1;
			else
			{
				d[i][2] = d[i - 2][1] + d[i - 2][3];
				
			}
			if (i < 3)
				d[i][3] = 0;
			else if (i == 3)
				d[i][3] = 1;
			else
			{
				d[i][3] = d[i - 3][1] + d[i - 3][2];
				
			}
			d[i][1] %= de;
			d[i][2] %= de;
			d[i][3] %= de;
	}
	while (n--)
	{
		int a;
		cin >> a;
		cout << (d[a][1] + d[a][2] + d[a][3]) % de << '\n';
	}
}

//#include <stdio.h>
//long long d[1000001][4];
//const long long mod = 1000000009LL;
//const int limit = 100000;
//int main() {
//	for (int i = 1; i <= limit; i++) {
//		if (i - 1 >= 0) {
//			d[i][1] = d[i - 1][2] + d[i - 1][3];
//			if (i == 1) {
//				d[i][1] = 1;
//			}
//		}
//		if (i - 2 >= 0) {
//			d[i][2] = d[i - 2][1] + d[i - 2][3];
//			if (i == 2) {
//				d[i][2] = 1;
//			}
//		}
//		if (i - 3 >= 0) {
//			d[i][3] = d[i - 3][1] + d[i - 3][2];
//			if (i == 3) {
//				d[i][3] = 1;
//			}
//		}
//		d[i][1] %= mod;
//		d[i][2] %= mod;
//		d[i][3] %= mod;
//	}
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		printf("%lld\n", (d[n][1] + d[n][2] + d[n][3]) % mod);
//	}
//}