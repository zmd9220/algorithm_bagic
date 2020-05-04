#include <iostream>

using namespace std;

int tile[1001];
// 재귀 짤 때 항상 주의 할것 = 미리 메모리 만들어라, 그리고 메모리가 0이 아닐떄(데이터 값이 있을때) 그 값을 리턴하도록(dp쓸거면)
int searchTile(int n)
{
	if (n == 1)
	{

		return tile[n];
	}
	else if (n == 2)
		return tile[n];

	if (tile[n] == 0) 
	{
		tile[n] = searchTile(n - 1) + searchTile(n - 2);
		tile[n] %= 10007;
		return tile[n];
	}
	return tile[n];
}

int main()
{
	int n;
	cin >> n;
	tile[1] = 1, tile[2] = 2;
	cout << searchTile(n) << '\n';

}

//#include <cstdio>
//int d[1001];
//int main() {
//	d[0] = 1;
//	d[1] = 1;
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++) {
//		d[i] = d[i - 1] + d[i - 2];
//		d[i] %= 10007;
//	}
//	printf("%d\n", d[n]);
//	return 0;
//}