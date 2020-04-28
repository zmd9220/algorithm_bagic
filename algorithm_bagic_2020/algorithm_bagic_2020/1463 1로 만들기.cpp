#include <iostream>

using namespace std;

int d[10000001];
int searchD(int a)
{
	if (a == 1)
		return 0;
	if (d[a] > 0)
		return d[a];
	else
	{
		d[a] = searchD(a - 1) + 1;
		if (a % 2 == 0)
		{
			int temp = searchD(a / 2) + 1;
			if (d[a] > temp)
				d[a] = temp;
		}
		if (a % 3 == 0)
		{
			int temp = searchD(a / 3) + 1;
			if (d[a] > temp)
				d[a] = temp;
		}
	}
	return d[a];
}

int main()
{
	int n;
	cin >> n;
	cout << searchD(n) << '\n';

}