#define _CRT_SECURE_NO_WARNINGS
#define MAX(a, b) a>b?a:b
#include <stdio.h>
#include <string.h>
int main() {
	char A[4], B[4];
	char CA[4], CB[4];
	int nCA = 0, nCB = 0;
	int n;
	scanf("%s %s", A, B);
	memset(CA, 0x00, sizeof(CA));
	memset(CB, 0x00, sizeof(CB));
	for (int i = 0, j = 2; i < 3; i++, j--) {
		CA[i] = A[j];
		CB[i] = B[j];
	}
	n = 100;
	for (int i = 0; i < 3; i++) {
		nCA = nCA + ((CA[i]) - 48) * n;
		nCB = nCB + ((CB[i]) - 48) * n;
		n /= 10;
	}
	printf("%d", MAX(nCA, nCB));
	return 0;
}