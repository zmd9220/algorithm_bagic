#include <iostream>

using namespace std;

int prime[1000001] = { 0 }; // 소수를 저장할 배열
bool check[1000001]; // 지워졌으면 true(소수가 아닌 수)
int pcount = 0; // 소수의 갯수

void eratos(int b) //a는 시작 b는 끝 범위
{
	for (int i = 2; i <= b; i++)
	{
		if (check[i] == false)
		{
			prime[pcount++] = i;
			for (int j = i + i; j <= b; j += i)
			{
				check[j] = true;
			}
		}

	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	eratos(m);
	for (int i = 0; i < pcount; i++)
	{
		if (prime[i] >= n)
		{
			cout << prime[i] << '\n';
		}
	}
}

//#include <iostream>
//using namespace std;
//const int MAX = 1000000;
//bool check[MAX + 1];
//int main() {
//	check[0] = check[1] = true;
//	for (int i = 2; i*i <= MAX; i++) {
//		if (check[i] == false) {
//			for (int j = i + i; j <= MAX; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	int m, n;
//	cin >> m >> n;
//	for (int i = m; i <= n; i++) {
//		if (check[i] == false) {
//			cout << i << '\n';
//		}
//	}
//	return 0;
//}