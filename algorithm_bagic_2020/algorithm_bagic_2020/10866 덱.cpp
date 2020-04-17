#include <iostream>
#include <string>

using namespace std;


// stack을 환형 배열의 구조로 구현(땡기기 귀찮)
class deque
{
public:

	void push_back(int a) // 푸쉬 입력
	{
		if (nums[(end + 1 + count) % count] == 0)
		{
			end = (end + 1 + count) % count;
			nums[end] = a;
			return;
		}
	}

	void push_front(int a) // 푸쉬 입력
	{
		if (nums[(begin - 1 + count) % count] == 0)
		{
			nums[begin] = a;
			begin = (begin - 1 + count) % count;
			return;
		}
		
	}

	void pop_front() // 꺼내기
	{
		if (end != begin)//(!empty()) // 비었으면
		{


			cout << nums[(begin + 1 + count) % count] << '\n';
			begin = (begin + 1 + count) % count;
			nums[begin] = 0;
			//nums[count] = 0; // 이건 해도되고 안해도됨
			return;
		}
		else // 안비었으면
		{

			cout << -1 << '\n';
			return;
		}
	}

	void pop_back() // 꺼내기
	{
		if (end != begin)//(!empty()) // 비었으면
		{


			cout << nums[(end + count) % count] << '\n';
			nums[end] = 0;
			end = (end - 1 + count) % count;
			
			//nums[count] = 0; // 이건 해도되고 안해도됨
			return;
		}
		else // 안비었으면
		{

			cout << -1 << '\n';
			return;
		}
	}

	void front() // 최상단 보여주기
	{
		if (end != begin)//(!empty()) // 비었으면
		{

			cout << nums[(begin + 1 + count) % count] << '\n';
			return;
		}
		else // 안비었으면
		{
			cout << -1 << '\n';

			return;
		}
	}

	void back() // 최상단 보여주기
	{
		if (end != begin)//(!empty()) // 비었으면
		{

			cout << nums[(end + count) % count] << '\n';
			return;
		}
		else // 안비었으면
		{
			cout << -1 << '\n';

			return;
		}
	}

	void empty() // 비었는지 체크
	{
		if (end == begin)
		{
			cout << 1 << '\n';
			return;
		}
		else
		{
			cout << 0 << '\n';
			return;
		}
	}

	void size()
	{
		cout << (end - begin + count) % count << '\n';
		return;
	}

private:
	int nums[10000] = { 0, };
	int count = 10000;
	int begin = 0;
	int end = 0;
};




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	deque st;
	cin >> n;
	while (n--)
	{
		string cmd;
		int num;
		cin >> cmd;
		{
			if (cmd == "push_back")
			{
				cin >> num;
				st.push_back(num);
			}
			else if (cmd == "push_front")
			{
				cin >> num;
				st.push_front(num);
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
			else if (cmd == "pop_front")
			{
				st.pop_front();
			}
			else
			{
				st.pop_back();
			}
		}
	}
}