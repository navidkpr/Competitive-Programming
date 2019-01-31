#include <iostream>
// #define int long long

using namespace std;

long long int delta = 1000*1000*1000 + 7;

int32_t main()
{
	long long int f[6];
	long long int x, y, n;
	cin >> x >> y >> n; n--;
	f[0] = x;
	f[1] = y;
	for (int i = 2; i < 6; i++)
		f[i] = f[i - 1] - f[i - 2];
	cout << ((f[n % 6] % delta) + delta) % delta << endl;
	return 0;
}
