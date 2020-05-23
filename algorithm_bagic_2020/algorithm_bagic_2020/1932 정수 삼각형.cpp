#include <iostream>
#include <algorithm>
using namespace std;

int d[501][501];
int arr[501][501];
void td(int n)
{
	return;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> d[i][j];
			if (i == 0)
				arr[i][j] = d[i][j];
		}
		if (i != 0)
		{
			for (int j = 0; j <=i; j++)
			{
				if (j == 0)
				{
					arr[i][j] += arr[i - 1][j]+d[i][j];
					continue;
				}
				if (j == i)
				{
					arr[i][j] += arr[i - 1][j - 1]+d[i][j];
				}
				else
				{
					arr[i][j] += max(arr[i - 1][j], arr[i - 1][j - 1]) + d[i][j];
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[i][j] > ans)
				ans = arr[i][j];
		}
	}
	cout << ans << '\n';
}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[500][500];
//int d[500][500];
//int main() {
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j <= i; j++) {
//			cin >> a[i][j];
//		}
//	}
//	d[0][0] = a[0][0];
//	for (int i = 1; i<n; i++) {
//		for (int j = 0; j <= i; j++) {
//			d[i][j] = d[i - 1][j] + a[i][j];
//			if (j - 1 >= 0 && d[i][j] < d[i - 1][j - 1] + a[i][j]) {
//				d[i][j] = d[i - 1][j - 1] + a[i][j];
//			}
//		}
//	}
//	int ans = d[n - 1][0];
//	for (int i = 0; i<n; i++) {
//		if (ans < d[n - 1][i]) {
//			ans = d[n - 1][i];
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}