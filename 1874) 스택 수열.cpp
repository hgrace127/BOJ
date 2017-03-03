#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
	int N, num, len;
	int i;
	queue<char> ans;
	queue<int> in;
	stack<int> stk;
	cin >> N;
	// USER INPUT
	for (i = 0; i < N; i++) {
		cin >> num;
		in.push(num);
	}
	for (i = 1; i <= N; i++) {
		ans.push('+');
		stk.push(i);
		while (stk.size() != 0 && stk.top() == in.front()) {
			ans.push('-');
			stk.pop();
			in.pop();
		}
	}
	if (!stk.size()) {
		len = ans.size();
		for (i = 0; i < len; i++) {
			cout << ans.front() << '\n';
			ans.pop();
		}
	}else {
		cout << "NO";
	}
	return 0;
}