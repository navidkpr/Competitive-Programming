#include <iostream>

using namespace std;
int a[2];

int gcd(int c, int b)
{
	if (c < b)
		swap(c, b);
	if (b == 0)
		return c;
	return gcd(c % b, b);
}

int main()
{
	int n;
	cin >> a[0] >> a[1] >> n;
	int turn = 0;
	bool h = 0;
	while (n > 0)
	{
		//cerr << a[turn] << &#39; &#39; << n << &#39; &#39; << gcd(a[turn], n) << endl;
		h = 1;
		n -= gcd(a[turn], n);
		turn = 1 - turn;
	}
	if (h)
		cout << 1 - turn << endl;
	else
		cout << 1 << endl;
	return 0;
}
