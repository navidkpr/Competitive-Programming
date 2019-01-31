#include <iostream>
#include <cmath>

using namespace std;

int32_t main()
{
	double x, y;
	cin >> x >> y;
	int ans = sqrt(x * x + y * y);
	// cerr << ans << endl;
	if (ans * ans == x * x + y * y)
		cout << "black" << endl;
	else if (ans % 2 == 0 && ((x <= 0 && y <= 0) || (x >= 0 && y >= 0)))
		cout << "black" << endl;
	else if (ans % 2 == 0)
		cout << "white" << endl;
	else if (ans % 2 == 1 && ((x <= 0 && y <= 0) || (x >= 0 && y >= 0)))
		cout << "white" << endl;
	else
		cout << "black" << endl;
	return 0;
}
