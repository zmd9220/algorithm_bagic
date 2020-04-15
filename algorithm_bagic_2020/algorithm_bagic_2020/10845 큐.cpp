#include <iostream>
#include <string>

using namespace std;


// stack을 환형 배열의 구조로 구현(땡기기 귀찮)
class queue
{
public:

	void push(int a) // 푸쉬 입력
	{
		nums[end] = a;
		end++;
		return;
	}

	void pop() // 꺼내기
	{
		if (end != begin)//(!empty()) // 비었으면
		{

			
			cout << nums[begin] << endl;
			begin++;
			//nums[count] = 0; // 이건 해도되고 안해도됨
			return;
		}
		else // 안비었으면
		{

			cout << -1 << endl;
			return;
		}
	}

	void front() // 최상단 보여주기
	{
		if (end != begin)//(!empty()) // 비었으면
		{

			cout << nums[begin] << endl;
			return;
		}
		else // 안비었으면
		{
			cout << -1 << endl;

			return;
		}
	}

	void back() // 최상단 보여주기
	{
		if (end != begin)//(!empty()) // 비었으면
		{

			cout << nums[end-1] << endl;
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
		if (end == begin)
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
		cout << abs(end-begin) << endl;
		return;
	}

private:
	int nums[10001];
	//int count = 0;
	int begin = 0;
	int end = 0;
};




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	queue st;
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
			else if (cmd == "front")
			{
				st.front();
			}

			else if (cmd == "back")
			{
				st.back();
			}
			else if (cmd == "empty")
			{
				st.empty();
			}
			else if (cmd == "size")
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