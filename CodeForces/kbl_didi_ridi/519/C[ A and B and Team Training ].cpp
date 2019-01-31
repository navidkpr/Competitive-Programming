#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n >= 2 * m)
		cout << m << endl;
	else if (m >= 2 * n)
		cout << n << endl;
	else
		cout << (n + m) / 3 << endl;
	return 0;
}
