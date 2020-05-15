#include <iostream>
#include <string.h>
using namespace std;


int d[1001] = { 0 };
int A[1001] = { 0 };
int v[1001] = { 0 };
void firstGo(int n)
{
	if (n == -1)
		return;
	firstGo(v[n]);
	cout << A[n] << ' ';
}


int main() {
	int n;
	cin >> n;
	int ans = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		d[i]++;
		v[i] = -1;
		for (int j = i - 1; j >= 0; j--)
		{
			if (A[i] > A[j])
			{
				if (d[j] >= d[i])
				{
					d[i] = d[j] + 1;
					v[i] = j;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (d[i] > ans)
		{
			ans = d[i];
			index = i;
		}
	}
	cout << ans << '\n';
	//while (index != -1)
	//{
	//	cout << A[index] << ' ';
	//	index = v[index];
	//}
	// 이건 큰 수 부터 뒤로 나감 재귀로 처음부터 나와야됨 ㅠ

	firstGo(index);
	cout << '\n';

}


//#include <iostream>
//using namespace std;
//int a[1000];
//int d[1000];
//int v[1000];
//void go(int p) {
//	// ? -> ? -> ... a[v[p]] -> a[p]
//	// ---------------------
//	//        go(v[p]);
//	if (p == -1) {
//		return;
//	}
//	go(v[p]);
//	cout << a[p] << ' ';
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i<n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i<n; i++) {
//		d[i] = 1;
//		v[i] = -1;
//		for (int j = 0; j<i; j++) {
//			if (a[j] < a[i] && d[i] < d[j] + 1) {
//				d[i] = d[j] + 1;
//				v[i] = j;
//			}
//		}
//	}
//	int ans = d[0];
//	int p = 0;
//	for (int i = 0; i<n; i++) {
//		if (ans < d[i]) {
//			ans = d[i];
//			p = i;
//		}
//	}
//	cout << ans << '\n';
//	go(p);
//	cout << '\n';
//	return 0;
//}
//
