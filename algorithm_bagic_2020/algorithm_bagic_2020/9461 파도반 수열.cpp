#include <iostream>

using namespace std;

long long d[101];
long long padoban(int n) // �ĵ��� ���� ��Ģ.. �׳� ���� ���� ���� ��Ȯ�� ������ ��
{
	for (int i = 6; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 5];
	}
	return d[n];
}

int main()
{
	int t;
	cin >> t;
	d[1] = 1, d[2] = 1, d[3] = 1, d[4] = 2, d[5] = 2;
	padoban(100); // �̸� �� ����س���
	while (t--) 
	{
		int n;
		cin >> n;
		cout << d[n] << '\n';
	}
	return 0;
}