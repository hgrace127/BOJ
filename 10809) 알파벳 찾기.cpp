#include <stdio.h>
#include <string.h>

void FindAlphabet() {
	int i = 0, j = 0, index, count;
	char str[100];
	char* alphabet = "abcdefghijklmnopqrstuvwxyz\0";
	scanf("%s", str);

	for (i = 0; i < strlen(alphabet); i++) {
		index = -1, count = -1;
		for (j = 0; j < strlen(str); j++) {
			count++;
			if (str[j] == alphabet[i]) {
				index = count;
				break;
			}
		}
		printf("%d ", index);
	}
}
int main() {

	FindAlphabet();

	return 0;
}