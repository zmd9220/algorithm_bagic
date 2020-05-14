#include <iostream>
#include <string.h>
using namespace std;


int d[1001] = { 0 };
int A[1001] = { 0 };
int v[1001] = { 0 };
void firstGo(int n)
{
	if (n == -1)
		return;
	firstGo(v[n]);
	cout << A[n] << ' ';
}


int main() {
	int n;
	cin >> n;
	int ans = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		d[i]++;
		v[i] = -1;
		for (int j = i - 1; j >= 0; j--)
		{
			if (A[i] > A[j])
			{
				if (d[j] >= d[i])
				{
					d[i] = d[j] + 1;
					v[i] = j;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (d[i] > ans)
		{
			ans = d[i];
			index = i;
		}
	}
	cout << ans << '\n';
	//while (index != -1)
	//{
	//	cout << A[index] << ' ';
	//	index = v[index];
	//}
	// 이건 큰 수 부터 뒤로 나감 재귀로 처음부터 나와야됨 ㅠ

	firstGo(index);
	cout << '\n';

}
