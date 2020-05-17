#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int arr[100001][2]; // 입력 받을 배열 0 윗줄 1 아랫줄
int d[100001][3]; // 0 안뜯은 경우 1 위뜯은경우 2 아래 뜯은 경우

void td(int n)
{
	d[0][0] = 0, d[0][1] = arr[0][0], d[0][2] = arr[0][1];
	for (int i = 1; i < n; i++)
	{
		d[i][0] = max({ d[i - 1][0],d[i - 1][2],d[i - 1][1] });
		d[i][1] = max(d[i - 1][0], d[i - 1][2]) + arr[i][0];
		d[i][2] = max(d[i - 1][1], d[i - 1][0]) + arr[i][1];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[j][i];
			}
		}
		td(n);
		cout << max({ d[n-1][0],d[n-1][1],d[n-1][2] }) << '\n';

		memset(arr, 0, sizeof(arr));
		memset(d, 0, sizeof(d));
	}

	
}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//long long a[100001][2];
//long long d[100001][3];
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		for (int i = 1; i <= n; i++) {
//			cin >> a[i][0];
//		}
//		for (int i = 1; i <= n; i++) {
//			cin >> a[i][1];
//		}
//		d[0][0] = d[0][1] = d[0][2] = 0;
//		for (int i = 1; i <= n; i++) {
//			d[i][0] = max({ d[i - 1][0],d[i - 1][1],d[i - 1][2] });
//			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
//			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
//		}
//		long long ans = max({ d[n][0], d[n][1], d[n][2] });
//		cout << ans << '\n';
//	}
//	return 0;
//}