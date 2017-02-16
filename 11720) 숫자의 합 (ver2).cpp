#include <stdio.h>

int main() {
	int N;
	int num;
	int sum = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%1d", &num);			// 띄어쓰기 없는 정수 값을 한 자리 숫자씩 읽어오기
		sum += num;					// char 변화 없음
	}
	
	printf("%d", sum);
}