#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

long long GCD(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a%b);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, S;
	cin >> N >> S;
	vector<long long> v(N);
	long long ans = LLONG_MAX;
	bool isOne = false;
	for (long long i = 0; i < N; i++)
	{

		long long a;
		cin >> a;
		if (N == 1)
		{
			cout << abs(S - a) << '\n';
			isOne = true;
			break;
		}
		v[i] = abs(S - a);
	}
	if (isOne == false)
	{
		for (long long i = 0; i < N - 1; i++)
		{
			for (long long j = i + 1; j < N; j++)
			{
				long long b = GCD(v[i], v[j]);
				if (ans > b)
				{
					ans = b;
				}
			}
		}
		cout << ans << '\n';
	}

	return 0;
}