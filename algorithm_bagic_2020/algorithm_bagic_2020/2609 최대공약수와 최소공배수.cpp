#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	while (b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int g = GCD(a, b);
	int LCM = a*b / g;
	cout << g << '\n' << LCM << '\n';

	return 0;
}