#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n - m > m - 1 && m + 1 <= n)
	{
		cout << m + 1 << endl;
		return 0;
	}
	if (m - 1 >= 1)
	{
		cout << m - 1 << endl;
		return 0;
	}
	cout << m << endl;
	return 0;
}
