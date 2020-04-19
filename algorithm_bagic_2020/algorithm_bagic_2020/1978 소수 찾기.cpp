#include <iostream>

using namespace std;

int prime = 0;
void isPrime(int a)
{
	bool check = false;
	if (a < 2)
	{
		return;
	}
	else
	{
		for (int i = 2; i*i <= a; i++)
		{
			if (a%i == 0)
			{
				return;
			}
		}
		prime++;
		return;
	}
}

int main()
{
	int N;
	cin >> N;
	while (N--)
	{

		int a;
		cin >> a;
		isPrime(a);
		
	}
	cout << prime << '\n';
}

//#include <iostream>
//using namespace std;
//bool is_prime(int x) {
//	if (x < 2) {
//		return false;
//	}
//	for (int i = 2; i*i <= x; i++) {
//		if (x % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	cin >> n;
//
//	int cnt = 0;
//	for (int i = 0; i<n; i++) {
//		int num;
//		cin >> num;
//		if (is_prime(num)) {
//			cnt += 1;
//		}
//	}
//
//	cout << cnt << '\n';
//	return 0;
//}