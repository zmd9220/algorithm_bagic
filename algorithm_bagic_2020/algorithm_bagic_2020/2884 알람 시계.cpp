#include <iostream>

using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	if (m - 45 < 0) //45�� �� �� �ð��� �� �ð����� �Ǹ�
	{
		m = m - 45 + 60;
		if (h - 1 < 0) // 0�� �϶��� ó��
		{
			h = 23;
		}
		else // �� ���� ���� -1
			h--;
		
	}
	else
	{
		m = m - 45;
	}
	cout << h << " " << m << '\n';
}