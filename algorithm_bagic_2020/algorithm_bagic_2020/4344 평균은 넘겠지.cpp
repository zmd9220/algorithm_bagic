#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int arr[1001] = { 0 };
		int N;
		cin >> N;
		float average = 0;
		float count = 0;
		for (int i = 0; i < N; i++)
		{
			int score;
			cin >> score;
			average += score;
			arr[i] = score;
		}
		average /= N;
		for (int i = 0; i < N; i++)
		{
			if (average < arr[i])
				count++;
		}
		cout << fixed; // 소수점만 몇자리까지 나오게 하려면 먼저 선언 - 이거 안하면 정수부분+소수부분합쳐서 자릿수가 결정됨(9자리라고 해도 정수5자리나오면 소수는 4자리 이런식으로)
		cout.precision(3); // 몇자리까지 표현할건지 적용
		float ans = count / N * 100;
		cout << ans << '%' << '\n';
		//cout.unsetf(ios::fixed); // 소수점 해제하는 방법
	}
}