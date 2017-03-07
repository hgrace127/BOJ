#include <iostream>
using namespace std;
int main() {
	int N, temp;
	int arr[1000];
	int i, j;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}