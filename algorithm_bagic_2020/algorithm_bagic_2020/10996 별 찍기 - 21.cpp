
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= 2*n; i++)
	{
		if (n == 1)
		{
			cout << "*\n";
			break;
		}
		if (i % 2 == 1) // È¦¼ö
		{
			for (int j = 1; j <= n; j++)
			{
				if (j % 2 == 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
		}
		else
		{
			for (int j = 1; j <= n; j++)
			{
				if (j % 2 == 1)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		cout << '\n';
	}
}


//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n * 2; ++i && printf("\n")) {
//		for (int j = (i & 1); j < n + (i & 1); j++)
//			printf("%c", j & 1 ? ' ' : '*');
//	}
//}

//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i<2 * n; i++ * printf("\n")) {
//		for (int j = 0; j<n; j++) {
//			(i + j) % 2 ? printf(" ") : printf("*");
//		}
//	}
//
//}