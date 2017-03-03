#include <stdio.h>
#include <string.h>
#define MAX 10001
typedef struct _STACK {
	int data;
}Stack;
Stack stack[MAX] = { -1, };
int idx = -1;
int cnt = 0;
void push();
int pop();
int size();
int empty();
int top();
int main() {
	char str[6] = { 0, };
	int i, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", str);
		if (!strcmp(str, "push")) {
			push();
		}
		else if (!strcmp(str, "pop")) {
			if (cnt > 0)
				printf("%d\n", pop());
			else if (cnt <= 0)
				printf("%d\n", -1);
		}
		else if (!strcmp(str, "size")) 	printf("%d\n", size());
		else if (!strcmp(str, "top")) 	printf("%d\n", top());
		else if (!strcmp(str, "empty"))	printf("%d\n", empty());
	}
	return 0;
}
void push() {
	int _data;
	scanf("%d", &_data);
	stack[++idx].data = _data;
	cnt++;
}
int pop() {
	cnt--;
	return stack[idx--].data;
}
int size() {
	return cnt;
}
int empty() {
	if (idx == -1) return 1;
	else return 0;
}
int top() {
	if (!empty()) return stack[idx].data;
	return -1;
}