#include <iostream>

using namespace std;

//bool check2[42]; // ���� �����ʱⰪ false
int main()
{
	//bool check[42]; // �������� �ʱⰪ true
	bool check3[42] = { false }; // �ʱⰪ�� false�� ��������� false�� ���� �ʱ�ȭ ������� 
	int ans = 0;
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		if (check3[num % 42] == false)
			check3[num % 42] = true;
	}
	for (int i = 0; i < 42; i++)
	{
		if (check3[i] == true)
			ans++;
	}
	cout << ans << '\n';

}