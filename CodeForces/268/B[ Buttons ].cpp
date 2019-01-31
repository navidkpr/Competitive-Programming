#include <iostream>

using namespace std;

const int MAXN = 3 * 1000;
int f[MAXN];

int main()
{
	int n;
	cin >> n;
	f[1] = n;
	for (int i = 2; i <= n; i++)
		f[i] = f[i - 1] + n - (i - 1) + (i - 1) * (n - i);
	cout << f[n] << endl;
	return 0;
}
