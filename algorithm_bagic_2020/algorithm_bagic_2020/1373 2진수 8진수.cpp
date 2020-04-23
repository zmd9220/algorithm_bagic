#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
	string str;
	cin >> str;
	
	reverse(str.begin(), str.end());
	const char * st = str.c_str();
	int count = 1;
	int a = 0;
	for (int i = 0; i < str.size(); i++)
	{
		int a = atoi(st[i]);
		cout << a << endl;
	}
}