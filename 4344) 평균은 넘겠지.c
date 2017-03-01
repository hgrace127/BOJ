#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int T;
	int N, stu[1000], count = 0;
	float sum, average;
	scanf("%d", &T);
	while (T > 0) {
		memset(stu, 0, sizeof(stu));
		sum = 0, count = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &stu[i]);
			sum += stu[i];
		}
		average = sum / N;
		for (int i = 0; i < N; i++) {
			if (stu[i] > average)
				count++;
		}
		printf("%.3f%%\n", (float)count / N * 100);
		T--;
	}
	return 0;
}