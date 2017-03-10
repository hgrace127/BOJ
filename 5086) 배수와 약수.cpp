#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (1) {
		cin >> a >> b;
		if (!a && !b)
			break;
		if (!(b % a)) {
			cout << "factor" << '\n';	// 약수
		}
		else if (!(a % b)) {
			cout << "multiple" << '\n';	// 배수
		}
		else {
			cout << "neither" << '\n';
		}
	}
	return 0;
}