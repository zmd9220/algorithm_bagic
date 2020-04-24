#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void* a, const void* b)
{
	int num1 = *(int*) a;
	return 1;
}
int arr[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;
	}
	//qsort(arr, sizeof(arr) / sizeof(int), sizeof(int));
}