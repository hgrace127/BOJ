#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int N, i, j, temp, temp_sum = 0;
	int sum = 0;
	int time[1000];
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> time[i];
	}
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (time[j] > time[j + 1]) {
				temp = time[j];
				time[j] = time[j + 1];
				time[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++) {
		temp_sum = 0;
		for(j =0; j <= i; j++){
			temp_sum += time[j];
		}
		sum += temp_sum;
	}
	cout << sum;
	return 0;
}