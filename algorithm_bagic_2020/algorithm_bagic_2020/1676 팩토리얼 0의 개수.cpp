#include <iostream>

using namespace std;

int main() // ���丮�󿡼��� 0�� ������ 5�� ���(2�� �������� 5�� ������ �����Ƿ�)�� ���� ��  nCm���� 0�� ���� ������ �ƴ϶��
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