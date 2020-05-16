#include <iostream>
#include <algorithm>
using namespace std;


int d[1001][3]; // 값 저장
int ans[1001][3];

int main()
{
	int n;
	cin >> n;
	int a = 10000;
	for (int i = 0; i < n; i++)
	{
		//int r, g, b;
		cin >> d[i][0] >> d[i][1] >> d[i][2];
	}
	ans[0][0] = d[0][0];
	ans[0][1] = d[0][1];
	ans[0][2] = d[0][2];
	for (int i = 1; i <= n; i++)
	{
		ans[i][0] = min(ans[i - 1][1] , ans[i - 1][2])+ d[i][0];
		ans[i][1] = min(ans[i - 1][0] , ans[i - 1][2])+ d[i][1];
		ans[i][2] = min(ans[i - 1][1] , ans[i - 1][0])+ d[i][2];
	}

	cout << min({ ans[n][1], ans[n][2], ans[n][0] }) << '\n'; // 3개 이상의 크기 비교시 {} 필요 하다는 걸 처음암..
}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[1001][3];
//int d[1001][3];
//int main() {
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j<3; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
//		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
//		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
//	}
//	cout << min({ d[n][0], d[n][1], d[n][2] }) << '\n';
//	return 0;
//}