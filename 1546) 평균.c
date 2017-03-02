#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	float num[1000];
	int max = 0;
	float sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%f", &num[i]);
		if (max < num[i])
			max = num[i];
	}
	
	for (int i = 0; i < N; i++) {
		num[i] = (num[i] / max) * 100;
		sum += num[i];
	}
	printf("%.2f", sum / N);
	return 0;
}