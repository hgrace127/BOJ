#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (1) {
		cin >> a >> b;
		if (!a && !b)
			break;
		if (!(b % a)) {
			cout << "factor" << '\n';	// ���
		}
		else if (!(a % b)) {
			cout << "multiple" << '\n';	// ���
		}
		else {
			cout << "neither" << '\n';
		}
	}
	return 0;
}