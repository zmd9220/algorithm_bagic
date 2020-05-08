#include <iostream>

using namespace std;

int de = 1000000000;
int d[101][10];
void searchStair(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i == 1 && j == 0) {
				d[i][j] = 0;
				continue;
			}
			if (i == 1)
				d[i][j] = 1;
			else
			{
				if (j == 0)
				{
					d[i][j] = d[i - 1][j + 1];
				}
				else if (j == 9)
				{
					d[i][j] = d[i - 1][j - 1];
					
				}
				else
				{
					d[i][j] = d[i - 1][j + 1] + d[i - 1][j - 1];
					
				}
				d[i][j] %= de;
			}
		}
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	long long ans = 0; // 답을 longlong으로..
	searchStair(n);
	for (int i = 0; i <= 9; i++)
	{
		
		ans += d[n][i];
	}
	cout << ans % de << '\n';
}


//#include <iostream>
//using namespace std;
//long long d[101][10];
//long long mod = 1000000000;
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= 9; i++) {
//		d[1][i] = 1;
//	}
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j <= 9; j++) {
//			d[i][j] = 0;
//			if (j - 1 >= 0) {
//				d[i][j] += d[i - 1][j - 1];
//			}
//			if (j + 1 <= 9) {
//				d[i][j] += d[i - 1][j + 1];
//			}
//			d[i][j] %= mod;
//		}
//	}
//	long long ans = 0;
//	for (int i = 0; i <= 9; i++) {
//		ans += d[n][i];
//	}
//	ans %= mod;
//	cout << ans << '\n';
//	return 0;
//}