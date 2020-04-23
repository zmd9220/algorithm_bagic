#include <iostream>

using namespace std;

int main()
{
	int a = 3000, b = 3000;
	for (int i = 0; i < 3; i++)
	{
		int c;
		cin >> c;
		if (c < a)
		{
			a = c;
		}
		
	}
	for (int i = 0; i < 2; i++)
	{
		int c;
		cin >> c;
		if (c < b)
			b = c;
	}
	cout << a + b - 50 << '\n';
}