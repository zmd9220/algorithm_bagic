#include <iostream>

using namespace std;

const int MAX = 1000000;
int prime[MAX]; // �Ҽ� ���� ����
bool checkP[MAX+1]; // �Ҽ����� �ƴ���
int countP = 0; // �Ҽ� ����

void eratos(int n)
{
	checkP[0] = true; 
	checkP[1] = true;
	for (int i = 2; i <= n; i++)
	{
		if (checkP[i] == false)
		{
			prime[countP++] = i;
			for (int j = i+i; j <= n; j+=i)
			{
				checkP[j] = true;
			}
		}
	}
	return;
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin >> T;
	
	eratos(MAX);
	while (T--)
	{
		
		int n;
		int count = 0;
		cin >> n;
		int end = 0;
		for (int i = 0; i < n; i++)
		{
			if (prime[i] >= n)
			{
				end = i;
				break;
			}
		}


		for (int i = 0; i < end; i++)
		{
			if (n - prime[i] >= 2 && prime[i] <= n - prime[i]) // 3+7�� ������ 7+3�� �������� �Ϸ��� 2���� ū�� 1�̶� 0�� ó�� ���س��� ���� �� �κ��� ������ ���� �ٽ�
				// �̰Ŷ��� ���� �ФФ�
			{
				if (checkP[n - prime[i]] == false)
				{
					count++;
				}
			}
			else
				break;
		}
		
		cout << count << '\n';
	}
}


//#include <iostream>
//#include <vector>
//using namespace std;
//bool check[1000001];
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	vector<int> primes;
//	for (int i = 2; i <= 1000000; i++) {
//		if (check[i] == false) {
//			primes.push_back(i);
//			for (int j = i + i; j <= 1000000; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		int ans = 0;
//		for (int i = 0; i<primes.size(); i++) {
//			if (n - primes[i] >= 2 && primes[i] <= n - primes[i]) {
//				if (check[n - primes[i]] == false) {
//					ans += 1;
//				}
//			}
//			else {
//				break;
//			}
//		}
//		cout << ans << '\n';
//	}
//	return 0;
//}