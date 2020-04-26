#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void* a, const void* b)
{
	int num1 = *(int*) a;
	int num2 = *(int*)b;
	if(num1 < num2)
		return -1;
	if (num1 > num2)
		return 1;

	return 0;
}

//int compare(const void *a, const void *b) //�� ������
//{
//	return *(int *)a - *(int *)b;    // ��������
//}

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
	//cout << sizeof(arr) << ' ' << sizeof(int) << '\n';
	qsort(arr, n, sizeof(int), compare);
	cout << arr[0] << " " << arr[n - 1] << '\n';
	return 0;
}


// �迭 ����� �ƴ϶� �׳� ũ�� �񱳽�;;
//#include <iostream>
//
//using namespace std;
//const int INF = 987654321;
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	int MAX = -1 * INF;
//	int MIN = INF;
//	for (int i = 0; i<n; ++i)
//	{
//		int t;
//		cin >> t;
//		if (t>MAX)
//			MAX = t;
//		if (t<MIN)
//			MIN = t;
//	}
//	cout << MIN << ' ' << MAX;
//}