#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int main() {
	queue<int> que;
	char str[6];
	int T, n, i;
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> str;
		if (!strcmp(str, "push")) {
			cin >> n;
			que.push(n);
		}
		else if (!strcmp(str, "front")) {
			if (!que.empty())
				cout << que.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (!strcmp(str, "back")) {
			if (!que.empty())
				cout << que.back() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (!strcmp(str, "size")) 
			cout << que.size() << '\n';
		
		else if (!strcmp(str, "empty")) {
			if (que.empty()) cout << 1 << '\n';
			else  			 cout << 0 << '\n';
		}
		else if (!strcmp(str, "pop")) {
			if (que.empty())
				cout << -1 << '\n';
			else {
				cout << que.front() << '\n';
				que.pop();
			}
		}
	}
	return 0;
}