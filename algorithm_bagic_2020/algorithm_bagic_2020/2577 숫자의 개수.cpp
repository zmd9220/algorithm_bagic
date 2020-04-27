#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
using namespace std;

// 내가 풀진 못함
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int mul = a*b*c;
	int arr[10] = { 0 };
	//string st = to_string(mul);

	int count = 0;
	while(mul != 0) // 이 부분이 문제풀이의 핵심
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