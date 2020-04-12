#include <iostream>
#include <string>

using namespace std;


// stack을 환형 배열의 구조로 구현(땡기기 귀찮)
class stack
{
public:
	
	void push(int a) // 푸쉬 입력
	{
		nums[count] = a;
		count++;
		return;
	}

	void pop() // 꺼내기
	{
		if (count != 0)//(!empty()) // 비었으면
		{

			count--;
			cout << nums[count] << endl;
			//nums[count] = 0; // 이건 해도되고 안해도됨
			return;
		}
		else // 안비었으면
		{

			cout << -1 << endl;
			return;
		}
	}

	void top() // 최상단 보여주기
	{
		if (count != 0)//(!empty()) // 비었으면
		{

			cout << nums[count - 1] << endl;
			return;
		}
		else // 안비었으면
		{
			cout << -1 << endl;

			return;
		}
	}

	void empty() // 비었는지 체크
	{
		if (count == 0)
		{
			cout << 1 << endl;
			return;
		}
		else
		{
			cout << 0 << endl;
			return;
		}
	}
	
	void size()
	{
		cout << count << endl;
		return;
	}

private:
	int nums[10001];
	int count = 0;
};




int main()
{
	int n;
	stack st;
	cin >> n;
	while (n--)
	{
		string cmd;
		int num;
		cin >> cmd;
		{
			if (cmd == "push")
			{
				cin >> num;
				st.push(num);
			}
			else if (cmd == "top")
			{
				st.top();
			}
			else if (cmd == "empty")
			{
				st.empty();
			}
			else if	(cmd == "size")
			{
				st.size();
			}
			else
			{
				st.pop();
			}
		}
	}
}