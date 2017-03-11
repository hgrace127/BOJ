#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int i, j;
	int x[100000], y[100000], T;
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> x[i] >> y[i];
	}
	sort(x, x + T);
	sort(y, y + T);

	for (i = 0; i < T; i++) {
		cout << x[i] << " " << y[i] << '\n';
	}

	return 0;
}