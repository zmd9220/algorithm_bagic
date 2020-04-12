#include <iostream>
#include <string>

using namespace std;


// stack�� ȯ�� �迭�� ������ ����(����� ����)
class stack
{
public:
	
	void push(int a) // Ǫ�� �Է�
	{
		nums[count] = a;
		count++;
		return;
	}

	void pop() // ������
	{
		if (count != 0)//(!empty()) // �������
		{

			count--;
			cout << nums[count] << endl;
			//nums[count] = 0; // �̰� �ص��ǰ� ���ص���
			return;
		}
		else // �Ⱥ������
		{

			cout << -1 << endl;
			return;
		}
	}

	void top() // �ֻ�� �����ֱ�
	{
		if (count != 0)//(!empty()) // �������
		{

			cout << nums[count - 1] << endl;
			return;
		}
		else // �Ⱥ������
		{
			cout << -1 << endl;

			return;
		}
	}

	void empty() // ������� üũ
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