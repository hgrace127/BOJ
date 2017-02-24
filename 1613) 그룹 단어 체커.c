#include <stdio.h>
#include <string.h>

int main() {
	int i = 0, count = 0;
	int N;

	char in[101];
	int buf[26];

	for (scanf("%d", &N); N > 0; N--) {
		memset(in, 0x00, sizeof(in));
		memset(buf, 0, sizeof(buf));
		scanf("%s", in);
		buf[in[0] - 'a']++;		// 첫 번째 글자
		for (i = 1; i < strlen(in); i++) {	// 두 번째 글자 ~
			if (in[i] != in[i - 1]) {
				buf[in[i] - 'a']++;
				if (buf[in[i] - 'a'] >= 2) {
					break;
				}
			}
			else if (in[i] == in[i - 1]) {
				continue;
			}
		}
		if (i == strlen(in))
			count++;
	}
	printf("%d", count);
	return 0;
}

