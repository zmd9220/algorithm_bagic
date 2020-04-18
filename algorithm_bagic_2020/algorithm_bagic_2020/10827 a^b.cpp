#include <iostream>

using namespace std;

int main()
{
	
	double a;
	int b;
	
	cin >> a >> b;
	double c = 1;
	for (int i = 0; i < b; i++)
	{
		c *= a;
	}
	cout << c << '\n';
}