#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
	int n;
	cin >> n;
	int p[10001] = { 0 };
	int d[1001] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			d[i] = max(d[i], d[i - j] + p[j]);
		}
	}
	cout << d[n] << '\n';
}

//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<int> a(n + 1);
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	vector<int> d(n + 1);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			d[i] = max(d[i], d[i - j] + a[j]);
//		}
//	}
//	cout << d[n] << '\n';
//	return 0;
//}