#include <iostream>

using namespace std;


bool check[10001]; // ���� false, �̹� �� ���� �����ѹ����� �ƴ��� ������ ���� �ִ��� üũ
void selfNumber(int a)
{
	for (int i = 1; i <= a; i++)
	{
		if (check[i] == false)
		{
			int sum = i;
			int start = i;
			while (start / 10 > 0)
			{
				sum += start % 10;
				start /= 10;
			}
			sum += start;
			for (int j = sum; j <= a; j=sum)
			{
				check[j] = true;
				start = j;
				sum = j;
				while (start / 10 > 0)
				{
					sum += start % 10;
					start /= 10;
				}
				sum += start;
			}
		}
	}
	return;
}

int main()
{
	selfNumber(10000);
	for (int i = 1; i <= 10000; i++)
	{
		if (check[i] == false)
			cout << i << '\n';
	}
}