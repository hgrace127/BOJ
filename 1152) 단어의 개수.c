#include <stdio.h>

int main() {

	char str[1000001];

	int count = 0;
	int len, i;

	fgets(str, sizeof(str), stdin);

	if (str[0] == '\n') {
		count = 0;
		return 0;
	}
	else if (str[0] != ' ' && str[0] != '\n') {
		count = 1;
	}

	for (i = 1; i <= sizeof(str) - 1; i++) {
		
		if (str[i - 1] == ' ' && str[i] != '\n' && str[i] != ' ') {
			count++;
		}
	}

	printf("%d", count);
	return 0;
}