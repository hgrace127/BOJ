#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int T;
	char OX[81];
	int i, j, sum = 0, score = 0;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%s", OX);
		score = 0, sum = 0;
		if (OX[0] == 'O') {	// O
			score++;
			sum += score;
		}
		for (j = 1; j < strlen(OX); j++) {
			if (OX[j] == 'O' && OX[j - 1] == 'O')
				score++;
			else if(OX[j] == 'O' && OX[j-1] != 'O')
				score = 1;
			
			if(OX[j] !='X')
				sum += score;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}