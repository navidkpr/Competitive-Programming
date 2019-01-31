#include <iostream>
#define int long long

using namespace std;

int gcd (int a, int b)
{
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	return gcd(a % b, b);
}

int32_t main()
{
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	int num = gcd(x, y);
	x /= num;
	y /= num;
	int num_1 = 0, num_2 = 0;
	int ans = b / y;
	if (ans * x <= a)
	{
		num_1 = ans * x;
		num_2 = ans * y;
	}
	ans = a / x;
	cerr << ans << endl;
	if (ans * y <= b && ans * x * ans * y >= num_1 * num_2)
	{
		num_1 = ans * x;
		num_2 = ans * y;
	}
	cout << num_1 << &#39; &#39; << num_2 << endl;
	return 0;
}
