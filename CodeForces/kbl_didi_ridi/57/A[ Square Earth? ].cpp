#include <iostream>

using namespace std;

int abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int32_t main()
{
	int n, x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	if ((x1 == 0 && x2 == n) || (x1 == n && x2 == 0))
		cout << min(y1 + y2, 2 * n - y1 - y2) + n << endl;
	else if ((y1 == 0 && y2 == n) || (y1 == n && y2 == 0))
		cout << min(x1 + x2, 2 * n - x1 - x2) + n << endl;
	else
		cout << abs(x1 - x2) + abs(y1 - y2) << endl;
	return 0;
}
