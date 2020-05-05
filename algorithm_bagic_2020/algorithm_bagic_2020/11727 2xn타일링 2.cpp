#include <iostream>

using namespace std;

int tiles[1001];
int searchTile2(int n)
{


	if (tiles[n] == 0)
	{
		tiles[n] = (searchTile2(n - 1) + 2 * searchTile2(n - 2))%10007;
	}

	return tiles[n];
}
int searchTile3(int n)
{
	for (int i = 3; i <= n; i++)
	{
		tiles[i] = tiles[i - 1] + 2 * tiles[i - 2];
		tiles[i] %= 10007;
	}
	return tiles[n];
}

int main()
{
	tiles[1] = 1, tiles[2] = 3;
	int n;
	cin >> n;
	cout << searchTile2(n) << '\n';
}
// Àç±Í

//#include <cstdio>
//int d[1001];
//int main() {
//	d[0] = 1;
//	d[1] = 1;
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= n; i++) {
//		d[i] = d[i - 1] + d[i - 2] + d[i - 2];
//		d[i] %= 10007;
//	}
//	printf("%d\n", d[n]);
//	return 0;
//}