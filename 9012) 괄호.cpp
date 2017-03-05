#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int T;
	int i, j, len, stkIdx, cnt, strIdx;
	char stk[101];
	char str[51];
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> str;
		len = strlen(str);
		memset(stk, -1, sizeof(stk));
		stkIdx = -1, cnt = 0, strIdx = 0;
		for (j = 0; j < len; j++) {
			if (str[strIdx] == ')') {
							// str == ))) 일 때 
							// push를 안하고 pop을 할 수 있나??
				// pop
				stk[stkIdx--] = -1;	cnt--; strIdx++;
				// empty
				if (cnt < 0) {
					break;
				}
			}
			else {
				// push
				stk[++stkIdx] = str[strIdx++];
				cnt++;
			}
		}
		if (cnt == 0)	cout << "YES\n";
		else			cout << "NO\n";
	}
	return 0;
}