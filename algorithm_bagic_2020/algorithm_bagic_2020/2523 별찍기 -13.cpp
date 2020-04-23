#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	for (int i = n-1; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << '\n';
	}

}

//#include<cstdio>
//
//int main() {
//	int c, k = 1;
//	scanf("%d", &c);
//	for (int i = 1; i > 0; i += k) {
//		for (int j = 0; j < i; j++) printf("*");
//		printf("\n");
//		if (i > c - 1) k *= -1;
//	}
//}