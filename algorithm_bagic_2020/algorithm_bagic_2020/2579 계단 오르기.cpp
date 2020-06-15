#include <iostream>
#include <algorithm>
using namespace std;

int a[301];
int d[301];
int stair(int n) // t-d ���
{
	if (d[n] > 0)
	{
		return d[n];
	}
	d[n] = max(stair(n - 3) + a[n - 1], stair(n - 2)) + a[n];

	return d[n];
}

int stair2(int n) //b-u �ݺ���
{
	for (int i = 4; i <= n; i++)
	{
		d[i] = max(d[i - 2], d[i - 3] + a[i - 1]) + a[i];
	}
	return d[n];
}

// �߸�§ �˰���.. �� - ��ȭ���� �߸�®��
// d[i] = iĭ�� �������� �� �� �� �ִ� ��� ���ɼ� �߿��� �ִ� ��
// 2��° ������ 2ĭ ���� �� ���, ������ �� �� �ִ� ���� ��� ���� 1ĭ,2ĭ ��� ���� -> d[i-2] (1,2 ��� �����ϹǷ� �ִ� ���� ����������)
// 1��° ������ 1ĭ ���� �� ���, �� ���� �� �� �ִ� ������ 2ĭ�� ����( 1ĭ ������ 3�� ���� 1ĭ �����̹Ƿ� ����) -> 1��° ������ 2��° ��(2��° ���̸� ��� ����� �� ����) i-1-2 => d[i-3] + 1��° �� ĭ�� �� + a[i-1]
// �� ���� ����� ������ ū �� + a[i]�� �ִ밪

// �ؿ��� § ���� 2���� ��츦 �̻��ϰ� ®��;;
//if (i == 3)
//{
//	d[i] = max(d[i - 1], d[i - 2]) + a[i];
//	continue;
//}
//d[i] = max(d[i - 3] + a[i - 1], max(d[i - 3], d[i - 4]) + a[i - 2]) + a[i];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	
	// ������ �Է�
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	// 3������ ���ܷ� ó��
	d[1] = a[1];
	d[2] = max(a[1] + a[2], a[2]);
	d[3] = max(a[1] + a[3], a[2] + a[3]);
	
	

	// dp
	cout << stair2(n) << '\n';
	return 0;
	
}