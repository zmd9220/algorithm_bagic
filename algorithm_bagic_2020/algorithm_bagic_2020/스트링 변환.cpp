#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	string st = "abcdefg";
	int i = 53;
	char* cst[50] = { "world" };
	char* cst2 = "hello";
	vector<string> name_list;
	string a = "ab";
	string b = "bc";
	string c = "ef";

	name_list.push_back(a);
	name_list.push_back(b);
	name_list.push_back(c);
	bool answer = false;
	for (int i = 0; i < name_list.size(); i++)
	{
		string t = name_list[i];
		for (int j = i + 1; j < name_list.size(); j++)
		{
			if (name_list[j].find(t) != string::npos) {
				answer = true;
				break;
			}
		}
		if (answer == true) {
			break;
		}
	}

	cout << answer;
}