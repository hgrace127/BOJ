#include <stdio.h>
#include <cstring>
int s[100000];
int userArr[100000] = { 0, };
char ans[200001];
int idx = -1, ansIdx = 0, aIdx = 0;
int main() {
	unsigned int N, i = 0, len;
	scanf("%d", &N);
	memset(s, -1, sizeof(s));
	for (i = 0; i < N; i++) {
		scanf("%d", &userArr[i]);
	}
	for (i = 1; i <= N; i++) {
		// push
		ans[ansIdx++] = '+';
		s[++idx] = i;
		while (idx >= 0 && (s[idx] == userArr[aIdx])) {
			// pop
			ans[ansIdx++] = '-';
			s[idx--] = -1;
			aIdx++;
		}
	}
	len = strlen(ans);
	//IsEmpty
	if (idx == -1) {
		for (i = 0; i < len; i++)
			printf("%c\n", ans[i]);
	}
	else {
		printf("NO");
	}
	return 0;
}