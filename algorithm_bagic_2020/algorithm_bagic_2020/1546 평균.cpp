#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int compare(const void* a, const void* b)
{
	int num1 = *(int *)a;
	int num2 = *(int*)b;
	return num1 - num2;
}

float compare2(const void* a, const void* b) //�ʿ����
{
	float num1 = *(float *)a;
	float num2 = *(float*)b;
	return num1 - num2;
}


int main()
{
	float arr[1001] = { 0 };
	int N;
	cin >> N;
	int max_score = 0;
	float ans = 0;
	for	(int i = 0; i<N; i++)
	{
		int score;
		cin >> score;
		arr[i] = score;
	/*	if (score > max_score)
			max_score = score;*/
	}
	qsort(arr, N, sizeof(float),compare);
	//cout << sizeof(float) << ' ' << sizeof(int) << '\n'; // �Ѵ� 4����Ʈ
	//qsort(arr, N, sizeof(int), compare);
	max_score = arr[N - 1];
	for (int i = 0; i < N; i++)
	{
		ans += arr[i] / max_score * 100;
	}
	cout << ans / N << '\n';
}

// �Ҽ����� ���°���� ����ض� �ϴ� ���� ���� ã�ƺ��� �����ؾߵ�