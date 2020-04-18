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
			while (!b.empty()) // <만나기전에 스택에 넣어놨던 단어들은 다 뒤집기해서 먼저 출력
			{
				cout << b.top();
				b.pop();
			}
			while (true) // > 만나기전까지 단어를 그대로 출력
			{
				if (ex[index] == '>')  // >를 만나면 > 출력후 무한루프문 빠져나가기 (bool변수를 넣어서 루프문 빠져나가게 해도 됨
				{
					cout << ex[index];
					index++;
					break;
				}
				cout << ex[index];
				index++;
			}
		}
		else if (a == ' ' || a == '\n') //일반 문자 일 경우
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
	// 최악의 경우는 모든 단어가 스택에 들어갔다 나오니까 O(N) 시간복잡도
}
// 24분 3초 걸림 성공
//백준 코드
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
