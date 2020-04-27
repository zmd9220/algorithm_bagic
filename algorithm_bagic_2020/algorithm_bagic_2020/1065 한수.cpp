#include <iostream>

using namespace std;

// 이것도 원래 답은 똑같은데 채점에선 틀렸다고함;; 1000까지의 수에선 오류가 없는데
int nums(int a)
{
	int count = 0;
	if (a >= 100)
	{

		int n = a / 100;
		count += 99 + ((n - 1) * 5);
		int ten = (n - (n / 2)) * 10;
		int one = (ten/10 - (n / 2));
		int check = n * 100 + ten + one;
		while (a >= check)
		{
			count++;
			check += 12;
		}
			return count;
	}
	else
		return a;
}

//http://blog.naver.com/PostView.nhn?blogId=occidere&logNo=220790000403 참조
int hans(int a)
{
	int count = 0;
	int arr[3];
	for (int i = 0; i <= a; i++)
	{
		if (i < 100)
		{
			count = i;
		}
		else if (i == 1000)
			break;
		else
		{
			int k = 0; int t = i;
			while (t > 0)
			{
				arr[k] = t % 10;
				t /= 10;
				k++;
			}
			if (arr[0] - arr[1] == arr[1] - arr[2])
				count++;
		}
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	int ans = hans(n);
	cout << ans << '\n';
}

// 이번 문제는 좀 억울한데?;;