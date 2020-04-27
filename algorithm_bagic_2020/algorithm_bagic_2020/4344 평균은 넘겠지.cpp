#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int arr[1001] = { 0 };
		int N;
		cin >> N;
		float average = 0;
		float count = 0;
		for (int i = 0; i < N; i++)
		{
			int score;
			cin >> score;
			average += score;
			arr[i] = score;
		}
		average /= N;
		for (int i = 0; i < N; i++)
		{
			if (average < arr[i])
				count++;
		}
		cout << fixed; // �Ҽ����� ���ڸ����� ������ �Ϸ��� ���� ���� - �̰� ���ϸ� �����κ�+�Ҽ��κ����ļ� �ڸ����� ������(9�ڸ���� �ص� ����5�ڸ������� �Ҽ��� 4�ڸ� �̷�������)
		cout.precision(3); // ���ڸ����� ǥ���Ұ��� ����
		float ans = count / N * 100;
		cout << ans << '%' << '\n';
		//cout.unsetf(ios::fixed); // �Ҽ��� �����ϴ� ���
	}
}