#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

long long GCD(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a%b);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, S;
	cin >> N >> S;
	vector<long long> v(N);
	
	bool isOne = false;
	for (long long i = 0; i < N; i++)
	{

		long long a;
		cin >> a;
		if (N == 1)
		{
			cout << abs(S - a) << '\n';
			isOne = true;
			break;
		}
		v[i] = abs(S - a);
	}
	long long ans = v[0];
	if (isOne == false)
	{
		for (long long i = 1; i < N; i++)
		{
			ans = GCD(ans, v[i]);
		}

		cout << ans << '\n';
	}
	//if (isOne == false)
	//{
	//	for (long long i = 0; i < N - 1; i++)
	//	{
	//		for (long long j = i + 1; j < N; j++)
	//		{
	//			long long b = GCD(v[i], v[j]);
	//			if (ans > b)
	//			{
	//				ans = b;
	//			}
	//		}
	//	}
	//	cout << ans << '\n';
	//}

	return 0;
}


//#include <iostream>
//#include <vector>
//using namespace std;
//int gcd(int x, int y) {
//	if (y == 0) return x;
//	else return gcd(y, x%y);
//}
//int main() {
//	int n, s;
//	cin >> n >> s;
//	vector<int> a(n);
//	for (int i = 0; i<n; i++) {
//		int x;
//		cin >> x;
//		int diff = x - s;
//		if (diff < 0) diff = -diff;
//		a[i] = diff;
//	}
//	int ans = a[0];
//	for (int i = 1; i<n; i++) {
//		ans = gcd(ans, a[i]);
//	}
//	cout << ans << '\n';
//	return 0;
//}
