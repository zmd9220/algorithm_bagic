#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <cstring>
#include <string.h>
using namespace std;

int main()
{/*
	char c;
	int result;
	cin >> c;
	result = (int)c;
	cout << result;*/

	string str;
	cin >> str;
	int alpha[27];
	unsigned char ex[27];
	memset(alpha, -1, sizeof(alpha)); // int�� ��� memset�� 0,1,-1�� ����
	//memset(ex, 100, sizeof(ex)); // char, unsigned char�� � ���̶� ����������
	//cout << ex[2] << '\n';
	for (int i = 0; i < str.size(); i++)
	{
		int al = int(str[i]);
		if (alpha[al - 97] == -1)
		{
			alpha[al - 97] = i;
		}
		
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << ' ';
	}
	cout << '\n';
	
}