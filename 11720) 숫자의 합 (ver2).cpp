#include <stdio.h>

int main() {
	int N;
	int num;
	int sum = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%1d", &num);			// ���� ���� ���� ���� �� �ڸ� ���ھ� �о����
		sum += num;					// char ��ȭ ����
	}
	
	printf("%d", sum);
}