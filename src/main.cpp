#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k;
	cin >> k;

	auto ans = 25 + k * 0.01;
	if (ans < 100) {
		ans = 100;
	}
	else if (2000 < ans) {
		ans = 2000;
	}
	cout << fixed << setprecision(2) << ans;

	return 0;
}