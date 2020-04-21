#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int cycle = 0, m = n;
	do 
	{
		int a = m / 10;
		int b = m % 10;
		int c = (a + b) % 10;
		m = b * 10 + c;
		cycle++;
	} while (m != n);

	cout << cycle << '\n';
}