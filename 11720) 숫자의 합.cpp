#include <stdio.h>

int main() {
	char str[100];
	int N;
	int sum = 0;

	scanf("%d", &N);
	
	scanf("%s", str);
	for (int i= 0; i < N; i++) {
		sum = sum + str[i] - 48;
	}

	printf("%d", sum);
}