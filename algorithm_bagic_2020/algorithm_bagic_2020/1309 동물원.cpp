#include <iostream>

using namespace std;

int d[100001][3];
int de = 9901;
int main()
{
	int n;
	cin >> n;
	d[1][0] = 1, d[1][1] = 1, d[1][2] = 1;
	for (int i = 2; i <= n; i++)
	{
		d[i][0] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2];
		d[i][1] = d[i - 1][0] + d[i - 1][2];
		d[i][2] = d[i - 1][1] + d[i - 1][0];
		for (int j = 0; j < 3; j++)
		{
			d[i][j] %= de;
		}
	}
	cout << (d[n][0] + d[n][1] + d[n][2]) % de << '\n';
}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int d[100001][3];
//int main() {
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	d[0][0] = 1;
//	for (int i = 1; i <= n; i++) {
//		d[i][0] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2];
//		d[i][1] = d[i - 1][0] + d[i - 1][2];
//		d[i][2] = d[i - 1][0] + d[i - 1][1];
//		for (int j = 0; j<3; j++) {
//			d[i][j] %= 9901;
//		}
//	}
//	cout << (d[n][0] + d[n][1] + d[n][2]) % 9901 << '\n';
//	return 0;
//}
