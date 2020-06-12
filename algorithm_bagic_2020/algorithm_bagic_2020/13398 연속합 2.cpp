#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;

	vector<int> a(n); // 수열 a
	vector<int> d(n); // 기존 연속합 (i번째 까지)
	vector<int> d2(n); // i번째 수에서 시작하는 연속합 수열
	
	// 1. input data
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		d[i] = a[i];
		d2[i] = a[i];
	}

	int ans = d[0];

	// 2. 기존 연속합 구하기 동시에 기존 연속합에서 최대값도 구해놓기
	for (int i = 1; i < n; i++)
	{
		if (d[i] < d[i - 1] + a[i])
			d[i] = d[i - 1] + a[i];
		if (d[i] > ans)
			ans = d[i];
	}

	// 3. i번째 수에서 시작하는 최대 연속합
	// 잘못 구현한 예제
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = i; j < n; j++)
	//	{
	//		if (d2[i] < d[j])
	//			d2[i] = d[j];
	//	}
	//}

	// 제대로 구현한 방식
	for (int i = n - 2; i >= 0; i--) 
	{
		if (d2[i] < d2[i + 1] + a[i]) 
		{
			d2[i] = d2[i + 1] + a[i];
		}
	}

	
	// 4. 기존의 연속합과 특정 수를 제거했을 때 연속합의 크기 중 가장 큰 것을 선택
	// 위에서 이미 기존 연속합의 최대값은 구했음
	//for (int i = 1; i<n; i++) 
	//{
	//	if (ans < d[i]) 
	//	{
	//		ans = d[i];
	//	}
	//}
	for (int i = 1; i < n-1; i++)
	{
		if (d[i - 1] + d2[i + 1] > ans)
			ans = d[i - 1] + d2[i + 1];
	}

	cout << ans << '\n';
	return 0;
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
//	vector<int> dr(n);
//	for (int i = 0; i<n; i++) {
//		d[i] = a[i];
//		if (i == 0) continue;
//		if (d[i] < d[i - 1] + a[i]) {
//			d[i] = d[i - 1] + a[i];
//		}
//	}
//	for (int i = n - 1; i >= 0; i--) {
//		dr[i] = a[i];
//		if (i == n - 1) continue;
//		if (dr[i] < dr[i + 1] + a[i]) {
//			dr[i] = dr[i + 1] + a[i];
//		}
//	}
//	int ans = d[0];
//	for (int i = 1; i<n; i++) {
//		if (ans < d[i]) {
//			ans = d[i];
//		}
//	}
//	for (int i = 1; i<n - 1; i++) {
//		if (ans < d[i - 1] + dr[i + 1]) {
//			ans = d[i - 1] + dr[i + 1];
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}