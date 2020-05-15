#include <iostream>
#include <algorithm>
using namespace std;


int d[100001];

int recu(int n)
{
	return 1;
}

void td(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j*j <= i; j++)
		{
			int a = j*j;
			if (d[i] > d[i - a] + 1)
			{
				d[i] = d[i - a] + 1;
			}
			
		}
	}
	return;
}


int main()
{
	int n;
	int ans = 1000000;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		d[i] = 1000000;
	}
	td(n);
	cout << d[n] << '\n';
}


//#include <iostream>
//using namespace std;
//int d[100001];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		d[i] = i;
//		for (int j = 1; j*j <= i; j++) {
//			if (d[i] > d[i - j*j] + 1) {
//				d[i] = d[i - j*j] + 1;
//			}
//		}
//	}
//	cout << d[n] << '\n';
//	return 0;
//}