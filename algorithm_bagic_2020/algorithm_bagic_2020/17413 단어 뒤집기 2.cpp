#include <iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/*int N;
	cin >> N;
	cin.ignore();*/
	/*while (N--)
	{*/
	stack<char> b;
	queue<char> q;
	string ex;
	getline(cin, ex);
	ex += '\n';
	int index = 0;
	int size = ex.size();
	while (index != ex.size())
	{
		char a = ex[index];
		bool found = true;
		if (a == '<')
		{
			while (!b.empty()) // <���������� ���ÿ� �־���� �ܾ���� �� �������ؼ� ���� ���
			{
				cout << b.top();
				b.pop();
			}
			while (true) // > ������������ �ܾ �״�� ���
			{
				if (ex[index] == '>')  // >�� ������ > ����� ���ѷ����� ���������� (bool������ �־ ������ ���������� �ص� ��
				{
					cout << ex[index];
					index++;
					break;
				}
				cout << ex[index];
				index++;
			}
		}
		else if (a == ' ' || a == '\n') //�Ϲ� ���� �� ���
		{
			while (!b.empty())
			{
				cout << b.top();
				b.pop();
			}
			cout << a;
			index++;
		}
		else
		{
			b.push(a);
			index++;
		}
	}
	// �־��� ���� ��� �ܾ ���ÿ� ���� �����ϱ� O(N) �ð����⵵
}
// 24�� 3�� �ɸ� ����
//���� �ڵ�
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//void print(stack<char> &s) {
//	while (!s.empty()) {
//		cout << s.top();
//		s.pop();
//	}
//}
//int main() {
//	string str;
//	getline(cin, str);
//	bool tag = false;
//	stack<char> s;
//	for (char ch : str) {
//		if (ch == '<') {
//			print(s);
//			tag = true;
//			cout << ch;
//		}
//		else if (ch == '>') {
//			tag = false;
//			cout << ch;
//		}
//		else if (tag) {
//			cout << ch;
//		}
//		else {
//			if (ch == ' ') {
//				print(s);
//				cout << ch;
//			}
//			else {
//				s.push(ch);
//			}
//		}
//	}
//	print(s);
//	cout << '\n';
//	return 0;
//}
