#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i, j, line = 0;

void PrintStar(int N) {
	int mid = 0;
	for (i = 0; i < N; i++, mid++) {	// 2, 5, 11
		for (j = 0; j < (2 * N - 1) / 2; j++) {
			printf(" ");
		}

		for(j = 0; j <)
		if (mid / 2 == 0)
			printf("*");



	}
}

int main() {
	int N;
	scanf("%d", &N);

	PrintStar(N);

	return 0;
}