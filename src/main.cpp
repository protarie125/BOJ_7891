#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;

	while (0 < (t--)) {
		int a, b;
		cin >> a >> b;

		cout << a + b << '\n';
	}

	return 0;
}