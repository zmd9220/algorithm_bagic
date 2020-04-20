#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	int count = 1;
	int a = 0;
	for (int i = 0; i < str.size(); i++)
	{
		int a = atoi(str[i]);
		cout << a << endl;
	}
}