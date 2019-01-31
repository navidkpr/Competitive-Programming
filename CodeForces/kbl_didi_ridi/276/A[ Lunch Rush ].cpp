#include <iostream>

using namespace std;

const int INF = 1000*1000*1000;
const int MAXN = 10*1000 + 1000;
int f[MAXN], t[MAXN];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> f[i] >> t[i];
	int max_joy = -INF;
	for (int i = 0; i < n; i++)
		if (t[i] > k)
			max_joy = max(max_joy, f[i] + k - t[i]);
		else
			max_joy = max(max_joy, f[i]);
	cout << max_joy << endl;
	return 0;
}
