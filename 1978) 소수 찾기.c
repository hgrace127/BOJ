#include <stdio.h>
int main() {
	int N, i, j;
	int prime[100];
	int count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &prime[i]);
		for (j = 2; j < prime[i]; j++) {			
			if (prime[i] % j == 0) {	// 1�� �ڱ� �ڽ� ���� ���� ��������
				break;					// �Ҽ��� �ƴϴ�.
			}
		}
		if (j == prime[i])
			count++;
	}
	printf("%d", count);
	return 0;
}