#include <iostream>
#include <vector>
using namespace std;

// 생각해보면 이거 객체지향 프로그래밍 1때 교수님이 언급하신 것 같다. call by value call by reference
long long sum(std::vector<int> &a) // reference로 할 경우 실제 내가 사용할 자료형안에 데이터 값까지 변경시켜서 리턴함(인자로 받은 그 자료 원본에 바로 손대서 처리하기 때문)
{
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	a[0] = 1;
	return ans;
}

long long sum2(std::vector<int> a) // 그냥 reference로 하지 않으면 벡터와 배열같은 자료형은 변하지 않고 복사해와서 처리후 리턴(인자로 받은 자료형의 사본으로 함수 처리 후 리턴)
{
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	a[0] = 2;
	return ans;
}

int main()
{
	vector<int> v;
	int n;
	cin >> n;
	while (n--)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	long long ans = sum(v);
	cout << v[0] << '\n';
	sum2(v);
	cout << v[0] << '\n';
	cout << ans << '\n';
	return 0;
}