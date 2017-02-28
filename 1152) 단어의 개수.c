#include <stdio.h>
#include <string.h>
int main() {

	char str[1000001];
	char* p;
	int count = 0;
	int i;

	// fgets(str, sizeof(str), stdin); -> \n까지 입력 됨
	// gets_s(str, sizeof(str)); -> 컴파일러가 인식 못할 수 있음
	fgets(str, sizeof(str) - 1, stdin);
	if ((p = strchr(str, '\n')) != NULL) *p = '\0';
	
	// 공백 
	// 공백 단어 
	// 공백 단어 공백
	// 단어 
	// 단어 공백 
	// 단어 공백 단어
	if (str[0] != ' ')
		count = 1;

	for (i = 1; i < strlen(str); i++) {		
		if (str[i - 1] == ' ' && str[i] != ' ') {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}