#include <iostream>

using namespace std;

int main() // 팩토리얼에서의 0의 갯수는 5의 배수(2의 갯수보다 5의 갯수가 적으므로)만 세면 됨  nCm같은 0의 조합 문제가 아니라면
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	int five = 5;
	int ans = 0;
	while (true)
	{
		if (five <= N)
		{
			ans += N / five;
			five *= 5;
		}
		else
		{
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}

//#include <iostream>
//using namespace std;
//int main() {
//	int ans = 0;
//	int n;
//	cin >> n;
//	for (int i = 5; i <= n; i *= 5) {
//		ans += n / i;
//	}
//	cout << ans << '\n';
//	return 0;
//}