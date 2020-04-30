#include <iostream>

using namespace std;

int arr[41];
int fibonacci2(int n) {
	if (n == 0) {
		printf("0");
		return 0;
	}
	else if (n == 1) {
		printf("1");
		return 1;
	}
	else {
		return fibonacci2(n-1) + fibonacci2(n-2);
	}
}
int fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (arr[n] > 0)
	{
		return arr[n];
	}
	else
	{
		arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return arr[n];
	}
}
int fzero[41];
int fone[41];
void fibonacci3(int n)
{
	fzero[0] = 1, fone[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		fzero[i] = fzero[i - 1] + fzero[i - 2];
		fone[i] = fone[i - 1] + fone[i - 2];
	}
	return;
}

int main()
{
	arr[0] = 0, arr[1] = 1;
	int T;
	cin >> T;
	fibonacci3(40);
	while (T--)
	{
		int n;
		cin >> n;
		cout << fzero[n] << ' ' << fone[n] << '\n';
		
	}
}

// 이 문제는 바텀업이 더 쉽다.


