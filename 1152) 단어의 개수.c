#include <stdio.h>

int main() {

	int str[1000000];

	int count = 1;
	int len, i;

	fgets(str, sizeof(str), stdin);
	for (i = 0; i < sizeof(str); i++) {
		if (str[i] == '\0') {
			len = i - 1;	// 길이에서 \0 제거
			i++;
		}
	}

	for (i = 0; i < len; i++) {
		if (str[i] == ' ') {
			count++;
		}
	}

	if (str[0] == '\n')
		count = 0;

	printf("%d", count);
	return 0;
}