#include <iostream>

using namespace std;

long long d[101];
long long padoban(int n) // 파도반 수열 규칙.. 그냥 예제 보고 했음 정확한 수식은 모름
{
	for (int i = 6; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 5];
	}
	return d[n];
}

int main()
{
	int t;
	cin >> t;
	d[1] = 1, d[2] = 1, d[3] = 1, d[4] = 2, d[5] = 2;
	padoban(100); // 미리 다 계산해놓음
	while (t--) 
	{
		int n;
		cin >> n;
		cout << d[n] << '\n';
	}
	return 0;
}