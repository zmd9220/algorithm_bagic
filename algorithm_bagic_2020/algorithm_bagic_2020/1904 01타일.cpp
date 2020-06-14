#include <iostream>

using namespace std;

int d[1000001]; // ��

// d[i-1] = ������ ���� 1�� ��� (i-1��°�� 0,1 ��� ����) 
// d[i-2] = ������ ���� 0�� ��� (i-1�� 0���� ����, i-2���� 0,1 ��� ����)
int tile(int n) // bottom-up
{
	for (int i = 3; i <= n; i++)
	{
		d[i] = (d[i - 1] + d[i - 2]) % 15746;
	}
	return d[n];
}

int tile2(int n) // top-down
{
	if (d[n] > 0)
		return d[n];
	d[n] = tile2(n - 1) + tile2(n - 2);
	d[n] %= 15746;
	return d[n];
}

int main()
{
	int n;
	cin >> n;
	d[1] = 1, d[2] = 2;
	cout << tile(n) << '\n';
	return 0;
}