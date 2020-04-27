#include <iostream>

using namespace std;

//bool check2[42]; // 전역 변수초기값 false
int main()
{
	//bool check[42]; // 지역변수 초기값 true
	bool check3[42] = { false }; // 초기값을 false로 쓰고싶으면 false로 따로 초기화 해줘야함 
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