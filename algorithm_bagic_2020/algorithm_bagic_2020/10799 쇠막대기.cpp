#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> st;
	string str;
	int ans = 0;
	// 레이저 파악용 카운트 필요
	int cnt = 0;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		char x = str[i];
		if (x == '(')
		{
			if (str[i + 1] == ')')
			{
				ans += st.size();
				i += 1;
			}
			else
			{
				st.push(x);
				ans++;
			}
		}
		else
		{
			st.pop();
		}
	}
	cout << ans << '\n';
}
// 모든 문자가 스택에 들어갔다 나오므로 O(N)
// 30분정도 걸린듯?

// 백준
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//int main() {
//	string a;
//	cin >> a;
//	int n = a.size();
//	stack<int> s;
//	int ans = 0;
//	for (int i = 0; i<n; i++) {
//		if (a[i] == '(') {
//			s.push(i);
//		}
//		else {
//			if (s.top() + 1 == i) {
//				s.pop();
//				ans += s.size();
//			}
//			else {
//				s.pop();
//				ans += 1;
//			}
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}