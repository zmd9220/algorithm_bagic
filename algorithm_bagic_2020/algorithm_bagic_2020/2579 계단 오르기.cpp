#include <iostream>
#include <algorithm>
using namespace std;

int a[301];
int d[301];
int stair(int n) // t-d 재귀
{
	if (d[n] > 0)
	{
		return d[n];
	}
	d[n] = max(stair(n - 3) + a[n - 1], stair(n - 2)) + a[n];

	return d[n];
}

int stair2(int n) //b-u 반복문
{
	for (int i = 4; i <= n; i++)
	{
		d[i] = max(d[i - 2], d[i - 3] + a[i - 1]) + a[i];
	}
	return d[n];
}

// 잘못짠 알고리즘.. ㅠ - 점화식을 잘못짰음
// d[i] = i칸에 도착했을 때 올 수 있는 모든 가능성 중에서 최대 수
// 2번째 전에서 2칸 점프 한 경우, 그전에 올 수 있는 점프 모든 수는 1칸,2칸 모두 가능 -> d[i-2] (1,2 모두 가능하므로 최대 수가 구해져있음)
// 1번째 전에서 1칸 점프 한 경우, 그 전에 올 수 있는 점프는 2칸만 가능( 1칸 점프시 3번 연속 1칸 점프이므로 에러) -> 1번째 전에서 2번째 전(2번째 전이면 모든 경우의 수 가능) i-1-2 => d[i-3] + 1번째 전 칸의 수 + a[i-1]
// 두 가지 경우의 수에서 큰 값 + a[i]가 최대값

// 밑에서 짠 경우는 2가지 경우를 이상하게 짰음;;
//if (i == 3)
//{
//	d[i] = max(d[i - 1], d[i - 2]) + a[i];
//	continue;
//}
//d[i] = max(d[i - 3] + a[i - 1], max(d[i - 3], d[i - 4]) + a[i - 2]) + a[i];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	
	// 데이터 입력
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	// 3까지는 예외로 처리
	d[1] = a[1];
	d[2] = max(a[1] + a[2], a[2]);
	d[3] = max(a[1] + a[3], a[2] + a[3]);
	
	

	// dp
	cout << stair2(n) << '\n';
	return 0;
	
}