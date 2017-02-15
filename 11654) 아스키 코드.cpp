#include <stdio.h>

// 입력 값을 아스키 코드로 출력하라
int main() {
	char input;					// char 변수 선언 

	scanf("%c", &input);		// 입력
	printf("%d", (int)input);	// int형 변환 후 출력

	return 0;
}