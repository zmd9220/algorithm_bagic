#include <iostream>
#include <vector>
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
	int a[9] = { 0 }; // 입력 받을 9난쟁이 키
	int d[7] = { 0 }; // 2명을 제외한 나머지 7난쟁이 키 
	// 데이터 입력
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}

	// i, j 제외할 난쟁이 위치
	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			int ans = 0; // 100 조건 확인용
			int index = 0; // d에 넣을 7난쟁이 index
			for (int k = 0; k < 9; k++)
			{
				if (i == k || j == k) // i==k,j==k 현재 k 인덱스가 제외한 난쟁이 위치인 경우
					continue;
				ans += a[k];
				d[index] = a[k];
				index++;
			}
			if (ans == 100) // 100 조건 달성했을 때
			{
				qsort(d, sizeof(d) / sizeof(int), sizeof(int), compare);
				for (int i = 0; i < 7; i++)
				{
					cout << d[i] << '\n';
				}
				return 0;
			}
		}
	}
	return 0;
}

// 알고리즘을 좀 더 간결하게 짜면
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[9];
//int n = 9;
//int main() {
//	int sum = 0;
//	for (int i = 0; i<n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	sort(a, a + n);
//	for (int i = 0; i<n; i++) {
//		for (int j = i + 1; j<n; j++) {
//			if (sum - a[i] - a[j] == 100) {
//				for (int k = 0; k<n; k++) {
//					if (i == k || j == k) continue;
//					cout << a[k] << '\n';
//				}
//				return 0;
//			}
//		}
//	}
//	return 0;
//}