#include <iostream>

using namespace std;

long long d[91];
long long fibonacci(int n) // dp�� �̿��� �Ǻ���ġ (�޸������̼�) top-down(���) ���
{
	if (n == 0)
		return d[n];
	if (d[n] > 0)
		return d[n];
	d[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return d[n];
}

long long fibonacci2(int n) // bottom-up ���
{
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	return d[n];
}

int main()
{
	int n;
	cin >> n;
	d[0] = 0, d[1] = 1;
	fibonacci(n);
	cout << d[n] << '\n';
	return 0;
}