#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int mul = a*b*c;
	int arr[10] = { 0 };
	//string st = to_string(mul);

	int count = 0;
	while(mul != 0)
	{
		arr[mul % 10] += 1;
		mul /= 10;
		//cout << mul << '\n';
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\n';
	}
}