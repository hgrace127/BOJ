#include <stdio.h>
#include <string.h>
char in[21];
int main() {
	int i, j, n, num;
	int T;
	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		memset(in, 0, sizeof(in));
		scanf("%d %s", &num, in);
		for (j = 0; j < strlen(in); j++) {
			for (n = 0; n < num; n++) {
				printf("%c", in[j]);
			}
		}
		printf("\n");
	}
	return 0;
}