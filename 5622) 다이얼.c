#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <string.h>
int main() {
	char dial[][5] = {
		"ABC",	// 2sec, idx = 0	sec = idx + 3;
		"DEF",	// 3sec, idx = 1	sec = idx + 3;
		"GHI",	// 4sec, idx = 2	sec = idx + 3;
		"JKL",	// 5sec, idx = 3	sec = idx + 3;
		"MNO",	// 6sec, idx = 4	sec = idx + 3;
		"PQRS",	// 7sec, idx = 5	sec = idx + 3;
		"TUV",	// 8sec, idx = 6	sec = idx + 3;
		"WXYZ"	// 9sec, idx = 7	sec = idx + 3;
	};
	char str[16];

	int sec = 0;
	int i, j, k;
	int len, flag = 0;
	memset(str, 0x00, sizeof(str));
	
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {		// str
		flag = FALSE;
		for (j = 0; j < dial; j++) {	// dial
			for (k = 0; k < strlen(dial[j]); k++) {
				if (str[i] == dial[j][k]) {
					sec = j + 3 + sec;
					flag = TRUE;
					break;
				}
			}
			if(flag == TRUE)
				break;
		}
	}

	printf("%d", sec);
	return 0;
}