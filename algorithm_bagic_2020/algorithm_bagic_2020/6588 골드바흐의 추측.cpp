#include <iostream>

using namespace std;


const int MAX = 1000000;
int prime[1000000]; // 소수를 저장 할 배열
bool checkP[MAX + 1]; // 소수가 아닌 수 = index true
int pCount = 0; // 소수 갯수
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//에라토스테네스의 체 구성

	checkP[0] = checkP[1] = true;
	for (int i = 2; i <= MAX; i++)
	{
		if (checkP[i] == false)
		{
			prime[pCount++] = i;
			for (int j = i + i; j <= MAX; j += i)
			{
				checkP[j] = true;
			}
		}
	}


	int N;

	while (cin >> N)
	{
		if (N == 0)
		{
			break;
		}
		int pc = pCount;
		int MAXpc = 0;
		for (int i = 0; i <= pc; i++)
		{
			if (prime[i] > N)
			{
				MAXpc = i;
				break;
			}
		}
		bool found = false;
		while (MAXpc--) // b구하는 과정
		{
			for (int i = 0; i <= MAXpc; i++)
			{
				if (prime[MAXpc] + prime[i] == N)
				{
					cout << N << " = " << prime[i] << " + " << prime[MAXpc] << '\n';
					found = true;
					break;
				}
			}

			if (found == true)
			{
				break;
			}
		}
		if (found == false)
		{
			cout << "Goldbach's conjecture is wrong.\n";
		}
	}
}

//#include <iostream>
//using namespace std;
//const int MAX = 1000000;
//int prime[MAX];
//int pn;
//bool check[MAX + 1];
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	for (int i = 2; i <= MAX; i++) {
//		if (check[i] == false) {
//			prime[pn++] = i;
//			for (int j = i + i; j <= MAX; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	while (true) {
//		int n;
//		cin >> n;
//		if (n == 0) {
//			break;
//		}
//		for (int i = 1; i < pn; i++) {
//			if (check[n - prime[i]] == false) {
//				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
//				break;
//			}
//		}
//	}
//	return 0;
//}