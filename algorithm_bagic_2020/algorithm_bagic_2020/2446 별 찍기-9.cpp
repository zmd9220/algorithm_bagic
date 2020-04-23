#include <iostream>

using namespace std;

int main()
{
	int n,c=1;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		for (int j = 0; j < i; j++)
		{
			cout << ' ';
			k++;
		}
		for (int j = 0; j < 2*(n-k)-1; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}

	for (int i = 2; i <= n; i++)
	{
		int k = 0;
		for (int j = n-i; j > 0; j--)
		{
			cout << ' ';
			k++;
		}
		for (int j = 0; j < 2*(n-k)-1; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}

	/*for (int i = 1; i > 0; i+=c)
	{
		for (int j = 0; j < i-1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*n-i; j++)
		{	
			cout << "*";
		}
		cout << '\n';
		if (i > n)
			c *= -1;
	}*/
}


//#import <stdio.h>
//int i, j, n;
//int abs(int x) {
//	return x>0 ? x : -x;
//}
//main()
//{
//	scanf("%d", &n);
//	n--;
//	for (i = 0; i<2 * n + 1; puts(""), i++)
//	{
//		for (j = 0; j<n - abs(n - i); j++)
//			printf(" ");
//		for (j = 0; j<abs(n - i) * 2 + 1; j++)
//			printf("*");
//	}
//}


//#include <stdio.h>
//
//int main() {
//	int a = 0, i = 0, j = 0;
//	scanf("%d", &a);
//	for (i = 0; i<a; i++) {
//		for (j = 0; j<i; j++)printf(" ");
//		for (j = 0; j <= 2 * a - 2 * i - 2; j++)printf("*");
//		printf("\n");
//	}
//	for (i = a - 1; i>0; i--) {
//		for (j = i; j>1; j--)printf(" ");
//		for (j = 0; j <= 2 * a - 2 * i; j++)printf("*");
//		if (i != 1)printf("\n");
//	}
//}

//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int n;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < 2 * n - 1; i++) {
//		for (int j = 0; j < n - 1 - abs(n - 1 - i); j++) printf(" ");
//		for (int j = 0; j <2 * abs(n - 1 - i) + 1; j++) printf("*");
//		puts("");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < i; j++)
//			printf(" ");
//		for (j = n * 2 - i * 2 - 1; j > 0; j--)
//			printf("*");
//		printf("\n");
//	}
//
//	for (i = 1; i < n; i++) {
//		for (j = n - i - 1; j > 0; j--)
//			printf(" ");
//		for (j = 0; j < i * 2 + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//}