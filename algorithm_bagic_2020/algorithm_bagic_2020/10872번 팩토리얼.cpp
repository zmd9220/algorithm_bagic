#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int ans = 1;
	for (int i = 2; i <= N; i++)
	{
		ans *= i;
	}
	cout << ans << '\n';
	
}

//#include <iostream>
//using namespace std;
//int factorial(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return n * factorial(n - 1);
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << factorial(n) << '\n';
//	return 0;
//}