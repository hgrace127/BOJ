#include <stdio.h>
int main() {
	int M, N;
	int i, j, a;
	int min = 10001, sum = 0,count = 0;
	int prime[10000];
	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++) {
		for (j = 2; j < i; j++) {
			a = i % j;
			if (a == 0) {
				break;
			}
		}
		if (j == i) {
			sum += i;
			count++;
			if (i < min)
				min = i;
		}
	}
	if (count == 0) {
		printf("-1");
		return 0;
	}
	printf("%d\n%d", sum, min);

	return 0;
}