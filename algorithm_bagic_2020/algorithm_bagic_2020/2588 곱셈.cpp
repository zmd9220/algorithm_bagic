#include <iostream>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;

	int three = n*(m % 10);
	int four = n*(m / 10 % 10);
	int five = n*(m / 100);
	cout << three << '\n' << four << '\n' << five << '\n'
		<< five * 100 + four * 10 + three << '\n';
}