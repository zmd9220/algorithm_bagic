#include <iostream>

using namespace std;

int GCD2(int a, int b) // 재귀
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD2(a, a%b);
	}
}

int GCD(int a, int b) // 반복
{
	while (!b == 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		int num[101] = { 0 };
		long long gcd = 0; // 정답의 합이 매우 많을 수 있으므로 int 보다 큰 범위로.. 이것 땜에 한번 틀림 ㅠㅠ
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> num[i];
		}
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				gcd += GCD(num[i], num[j]);
			}
		}
		cout << gcd << '\n';
	}

	return 0;
}


//#include <iostream>
//using namespace std;
//int gcd(int x, int y) {
//	if (y == 0) return x;
//	else return gcd(y, x%y);
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int a[111];
//		int n;
//		cin >> n;
//		for (int i = 0; i<n; i++) {
//			cin >> a[i];
//		}
//		long long sum = 0;
//		for (int i = 0; i<n - 1; i++) {
//			for (int j = i + 1; j<n; j++) {
//				sum += gcd(a[i], a[j]);
//			}
//		}
//		cout << sum << '\n';
//	}
//	return 0;
//}