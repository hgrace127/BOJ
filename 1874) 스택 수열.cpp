#include <stdio.h>
#include <cstring>
typedef struct _STACK {
	int data;
}STACK;
STACK s[100000];
int userArr[100000] = { 0, };
char ans[200001];
int idx = -1, ansIdx = 0, aIdx = 0;
void push(int _data);
int pop();
int top();
int empty();
int main() {
	unsigned int N, i = 0, len;
	scanf("%d", &N);
	memset(s, -1, sizeof(s));
	for (i = 0; i < N; i++) {
		scanf("%d", &userArr[i]);
	}
	for (i = 1; i <= N; i++) {
		push(i);
		while (idx >= 0 && top() == userArr[aIdx]) {
			pop();
			aIdx++;
		}
	}
	len = strlen(ans);
	if (empty()) {
		for (i = 0; i < len; i++)
			printf("%c\n", ans[i]);
	}
	else	printf("NO");

	return 0;
}
int empty() {
	return (idx == -1);
}
void push(int _data) {
	ans[ansIdx++] = '+';
	s[++idx].data = _data;
}
int pop() {
	ans[ansIdx++] = '-';
	s[idx].data = -1;
	return s[idx--].data;
}
int top() {
	return s[idx].data;
}