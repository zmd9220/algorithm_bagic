#include <iostream>

using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	if (m - 45 < 0) //45를 뺄 때 시간이 전 시간으로 되면
	{
		m = m - 45 + 60;
		if (h - 1 < 0) // 0시 일때만 처리
		{
			h = 23;
		}
		else // 그 외의 경우는 -1
			h--;
		
	}
	else
	{
		m = m - 45;
	}
	cout << h << " " << m << '\n';
}