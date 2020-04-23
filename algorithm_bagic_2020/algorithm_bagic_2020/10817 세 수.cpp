#include <iostream>
#include <algorithm>
using namespace std;

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main()
{
	int bs[3];
	//int a, b, c;
	cin >> bs[0] >> bs[1] >> bs[2];

	qsort(bs, 3,sizeof(int),compare);
	cout <<  bs[1] << '\n';
	/*if (a > b)
	{

	}*/
}