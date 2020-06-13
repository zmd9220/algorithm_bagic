#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main()
{
	int a[9] = { 0 }; // �Է� ���� 9������ Ű
	int d[7] = { 0 }; // 2���� ������ ������ 7������ Ű 
	// ������ �Է�
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}

	// i, j ������ ������ ��ġ
	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			int ans = 0; // 100 ���� Ȯ�ο�
			int index = 0; // d�� ���� 7������ index
			for (int k = 0; k < 9; k++)
			{
				if (i == k || j == k) // i==k,j==k ���� k �ε����� ������ ������ ��ġ�� ���
					continue;
				ans += a[k];
				d[index] = a[k];
				index++;
			}
			if (ans == 100) // 100 ���� �޼����� ��
			{
				qsort(d, sizeof(d) / sizeof(int), sizeof(int), compare);
				for (int i = 0; i < 7; i++)
				{
					cout << d[i] << '\n';
				}
				return 0;
			}
		}
	}
	return 0;
}

// �˰����� �� �� �����ϰ� ¥��
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[9];
//int n = 9;
//int main() {
//	int sum = 0;
//	for (int i = 0; i<n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	sort(a, a + n);
//	for (int i = 0; i<n; i++) {
//		for (int j = i + 1; j<n; j++) {
//			if (sum - a[i] - a[j] == 100) {
//				for (int k = 0; k<n; k++) {
//					if (i == k || j == k) continue;
//					cout << a[k] << '\n';
//				}
//				return 0;
//			}
//		}
//	}
//	return 0;
//}