#include <iostream>
#include <string>

using namespace std;


// stack�� ȯ�� �迭�� ������ ����(����� ����)
class queue
{
public:

	void push(int a) // Ǫ�� �Է�
	{
		nums[end] = a;
		end++;
		return;
	}

	void pop() // ������
	{
		if (end != begin)//(!empty()) // �������
		{

			
			cout << nums[begin] << endl;
			begin++;
			//nums[count] = 0; // �̰� �ص��ǰ� ���ص���
			return;
		}
		else // �Ⱥ������
		{

			cout << -1 << endl;
			return;
		}
	}

	void front() // �ֻ�� �����ֱ�
	{
		if (end != begin)//(!empty()) // �������
		{

			cout << nums[begin] << endl;
			return;
		}
		else // �Ⱥ������
		{
			cout << -1 << endl;

			return;
		}
	}

	void back() // �ֻ�� �����ֱ�
	{
		if (end != begin)//(!empty()) // �������
		{

			cout << nums[end-1] << endl;
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