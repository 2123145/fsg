#include <iostream>
using namespace std;

int geometry(int n, int b, int q);

void main() {
	int b = 5;
	int q = 3;
	int n = 4;
	cout << geometry(n, b, q) << endl;
};

int geometry(int n, int b, int q) {
	if (n <= 0) {
		return 0;
	}
	int value = b * pow(q, n - 1);
	return geometry(n - 1, b, q) + value;
}