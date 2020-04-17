#include <iostream>
#include <string>

using namespace std;


// stack�� ȯ�� �迭�� ������ ����(����� ����)
class deque
{
public:

	void push_back(int a) // Ǫ�� �Է�
	{
		if (nums[(end + 1 + count) % count] == 0)
		{
			end = (end + 1 + count) % count;
			nums[end] = a;
			return;
		}
	}

	void push_front(int a) // Ǫ�� �Է�
	{
		if (nums[(begin - 1 + count) % count] == 0)
		{
			nums[begin] = a;
			begin = (begin - 1 + count) % count;
			return;
		}
		
	}

	void pop_front() // ������
	{
		if (end != begin)//(!empty()) // �������
		{


			cout << nums[(begin + 1 + count) % count] << '\n';
			begin = (begin + 1 + count) % count;
			nums[begin] = 0;
			//nums[count] = 0; // �̰� �ص��ǰ� ���ص���
			return;
		}
		else // �Ⱥ������
		{

			cout << -1 << '\n';
			return;
		}
	}

	void pop_back() // ������
	{
		if (end != begin)//(!empty()) // �������
		{


			cout << nums[(end + count) % count] << '\n';
			nums[end] = 0;
			end = (end - 1 + count) % count;
			
			//nums[count] = 0; // �̰� �ص��ǰ� ���ص���
			return;
		}
		else // �Ⱥ������
		{

			cout << -1 << '\n';
			return;
		}
	}

	void front() // �ֻ�� �����ֱ�
	{
		if (end != begin)//(!empty()) // �������
		{

			cout << nums[(begin + 1 + count) % count] << '\n';
			return;
		}
		else // �Ⱥ������
		{
			cout << -1 << '\n';

			return;
		}
	}

	void back() // �ֻ�� �����ֱ�
	{
		if (end != begin)//(!empty()) // �������
		{

			cout << nums[(end + count) % count] << '\n';
			return;
		}
		else // �Ⱥ������
		{
			cout << -1 << '\n';

			return;
		}
	}

	void empty() // ������� üũ
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