#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char str[1000001];

typedef struct _ALPHABET {
	char word;
	int count;
}ALPHABET;

int main() {
	int i, j, alphaIdx = 0, maxId, maxCount = 0;
	ALPHABET alpha[26];
	memset(str, 0, strlen(str));
	memset(&alpha, 0, sizeof(struct _ALPHABET));
	get(str);

	for (i = 0; i < strlen(str); i++) {
		for (j = 0; j < sizeof(alpha)/sizeof(ALPHABET); j++) {
			if (str[i] != alpha[j].word) {
				alpha[alphaIdx].word = str[i];
				alpha[alphaIdx].count++;
				break;
			}
		}
	}

	for (i = 0; i < sizeof(alpha) / sizeof(ALPHABET); i++) {
		
		if(maxCount < alpha[i].count)

	}

	


	return 0;
}
