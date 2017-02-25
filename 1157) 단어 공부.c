#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int i = 0, flag = 0,  max = 0;
	char str[1000001], ans;
	int alphabet[26];
	int len;
	memset(str, 0x00, sizeof(str));
	memset(alphabet, 0, sizeof(alphabet));

	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;				// 소문자 -> 대문자 변환
		}
		alphabet[str[i] - 'A']++;
		if (max < alphabet[str[i] - 'A']) {
			max = alphabet[str[i] - 'A'];
			ans = str[i];
		}
	}

	for (i = 0; i < sizeof(alphabet)/sizeof(int); i++) {
		if (max == alphabet[i]) {
			flag++;
			if (flag >= 2) {
				printf("?");
				return 0;
			}
		}
	}
	printf("%c", ans);
	return 0;
}
// 시간 초과