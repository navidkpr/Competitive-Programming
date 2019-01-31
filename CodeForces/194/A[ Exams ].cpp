#include <iostream>

using namespace std;

int32_t main()
{
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	if (k / n != 2)
	{
		cout << 0 << endl;
		return 0;
	}
	cout << n - (k - 2 * n) << endl;
	return 0;
}
