#include <iostream>
#include <vector>
using namespace std;

// �����غ��� �̰� ��ü���� ���α׷��� 1�� �������� ����Ͻ� �� ����. call by value call by reference
long long sum(std::vector<int> &a) // reference�� �� ��� ���� ���� ����� �ڷ����ȿ� ������ ������ ������Ѽ� ������(���ڷ� ���� �� �ڷ� ������ �ٷ� �մ뼭 ó���ϱ� ����)
{
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	a[0] = 1;
	return ans;
}

long long sum2(std::vector<int> a) // �׳� reference�� ���� ������ ���Ϳ� �迭���� �ڷ����� ������ �ʰ� �����ؿͼ� ó���� ����(���ڷ� ���� �ڷ����� �纻���� �Լ� ó�� �� ����)
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