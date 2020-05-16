#include <iostream>

using namespace std;


long long d[1000001][4];
long long d2[1000001];
long long M = 1000000009;
int RECU(int n)
{
	if (d2[n] != 0)
		return d2[n];
	d2[n] = RECU(n - 1) + RECU(n - 2) + RECU(n - 3);
	d2[n] %= M;
	return d2[n];
}

void td(int n)
{
	for (int i = 3; i <= n; i++)
	{
		d2[i] = d2[i - 1] + d2[i - 2] + d2[i - 3];
		d2[i] %= M;
	}
	return;
}

int main()
{
	int t;
	cin >> t;
	d[0][1] = 1, d[0][2] = 1, d[0][3] = 1;
	d2[0] = 1; d2[1] = 1; d2[2] = 2;
	td(1000000);
	while (t--)
	{
		int n;
		cin >> n;
		cout << d2[n] << '\n';
	}
}


//#include <iostream>
//using namespace std;
//long long d[1000001];
//const long long mod = 1000000009LL;
//int main() {
//	d[0] = 1;
//	for (int i = 1; i <= 1000000; i++) {
//		if (i - 1 >= 0) {
//			d[i] += d[i - 1];
//		}
//		if (i - 2 >= 0) {
//			d[i] += d[i - 2];
//		}
//		if (i - 3 >= 0) {
//			d[i] += d[i - 3];
//		}
//		d[i] %= mod;
//	}
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		cout << d[n] << '\n';
//	}
//}