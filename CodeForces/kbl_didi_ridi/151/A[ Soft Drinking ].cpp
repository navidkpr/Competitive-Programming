#include <iostream>

using namespace std;
int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int min_toast = 100000;
	min_toast = k * l / (nl * n);
	min_toast = min(min_toast, (c * d) / n);
	min_toast = min(min_toast, p / (np * n));
	cout << min_toast << endl;
	return 0;
}
