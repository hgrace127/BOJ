// 시간이 아슬아슬함
#include <stdio.h>
void func() {
	int N = 0, n = 0;			// 입력 숫자
	int targetNum = 0;	// 한수 개수
	int digit[3];
	int i, j;
	
	scanf("%d", &N);			// N 입력
	for (i = 0; i < 3; i++) {	// 배열 초기화
		digit[i] = 0;
	}

	for (i = 1; i <= N; i++) {
		if (i >= 1 && i < 100)	// 한두자리 일 때
			targetNum++;
		else if (i >= 100 && i < 1000) { // 세자리 일 때
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