// �ð��� �ƽ��ƽ���
#include <stdio.h>
void func() {
	int N = 0, n = 0;			// �Է� ����
	int targetNum = 0;	// �Ѽ� ����
	int digit[3];
	int i, j;
	
	scanf("%d", &N);			// N �Է�
	for (i = 0; i < 3; i++) {	// �迭 �ʱ�ȭ
		digit[i] = 0;
	}

	for (i = 1; i <= N; i++) {
		if (i >= 1 && i < 100)	// �ѵ��ڸ� �� ��
			targetNum++;
		else if (i >= 100 && i < 1000) { // ���ڸ� �� ��
			n = i;
			for (j = 0; j < 3; j++) {
				digit[j] = n % 10;
				n /= 10;
			}
			if (digit[1] - digit[0] == digit[2] - digit[1])
				targetNum++;
		}
		else if (i == 1000)
			continue;
	}
	printf("%d", targetNum);
	return;
}


int main() {
	func();
}