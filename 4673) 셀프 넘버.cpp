#include <stdio.h>

void CalSelfNum() {
	int func[10002];
	int conNum[10002];
	int n;
	int i, j, k;
	for (i = 0; i < 10001; i++) {
		func[i] = 0;
		conNum[i] = 0;
	}

	for (j = 0; j < 10001; j++) {
		n = j + 1;
		if (n < 10) {	// �� �ڸ��� ��
			func[j + 1] = n + (n % 10);
			conNum[func[j + 1]]++;
		}
		else if (n >= 10 && n < 100) { // �� �ڸ��� ��
			func[j + 1] = n + (n / 10) + (n % 10);
			conNum[func[j + 1]]++;
		}
		else if (n >= 100 && n < 1000) {	// �� �ڸ��� ��
			func[j + 1] = n + (n / 100) + ((n % 100) / 10) + (n % 100 % 10);
			conNum[func[j + 1]]++;
		}
		else if (n >= 1000 && n < 10000) {	// �� �ڸ��� ��
			func[j + 1] = n + (n / 1000) + ((n % 1000) / 100) + ((n % 1000) % 100 / 10) + ((n % 1000) % 100 % 10);
			if (func[j + 1] <= 10000)
				conNum[func[j+1]]++;
		}
	}

	for(k = 0; k < 10001; k++){
		if (conNum[k + 1] == 0)
			printf("%d\n", k + 1);
	}
}
int main()
{
	CalSelfNum();
}