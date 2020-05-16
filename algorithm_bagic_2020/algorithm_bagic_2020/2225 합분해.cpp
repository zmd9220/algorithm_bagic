#include <iostream>

using namespace std;
long long d[201][201] = { 0 };
//long long d2[201][201] = { 0 };
int main()
{
	
	int n,k;
	cin >> n >> k;
	d[0][0] = 1LL; // for문 짜기가 어려웠음.. 순서가
	long long moD = 1000000000;
	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			for (int l = 0; l <= j; l++)
			{
				d[i][j] += d[i - 1][j - l];
				d[i][j] %= moD;
			}
		}
	}

	cout << d[k][n] << '\n';
	//d2[0][0] = 1;
	//for (int i = 0; i <= n; i++)
	//{
	//	for (int j = 1; j <= k; j++)
	//	{
	//		for (int l = 0; l <= i; l++)
	//		{
	//			d2[i][j] += d2[i - l][j - 1];
	//			d2[i][j] %= moD;
	//		}
	//	}
	//}
	//cout << d2[n][k] << '\n';
}


//#include <iostream>
//using namespace std;
//long long d[201][201];
//long long mod = 1000000000;
//int main() {
//	int n, k;
//	cin >> n >> k;
//	d[0][0] = 1LL;
//	for (int i = 1; i <= k; i++) {
//		for (int j = 0; j <= n; j++) {
//			for (int l = 0; l <= j; l++) {
//				d[i][j] += d[i - 1][j - l];
//				d[i][j] %= mod;
//			}
//		}
//	}
//	cout << d[k][n] << '\n';
//	return 0;
//}