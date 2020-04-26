#include <iostream>

using namespace std;

int main()
{
	int arr[9];
	int max = 0;
	int index = 0;
	for (int i = 0; i < 9; i++)
	{
		int a;
		cin >> a;
		arr[i] = a;
		if (max < a)
		{
			max = a;
			index = i;
		}
	}
	cout << max << '\n' << index + 1 << '\n';
	return 0;
}