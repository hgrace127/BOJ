#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num = 0, fix, cycle = 0;
	scanf("%d", &num);
	fix = num;
	while(1){
		num = ((num % 10) * 10) + (((num / 10) + (num % 10)) % 10);
		cycle++;
		if (num == fix)
			break;
	}
	printf("%d", cycle);
	return 0;
}
