#include <iostream>
#define int long long

using namespace std;

int32_t main()
{
	int n; cin >> n;
	if (n < 4)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	if (n % 2 == 0)
	{
		cout << 1 << " * " << 2 << " = " << 2 << endl;
		cout << 3 << " * " << 2 << " = " << 6 << endl;
		cout << 4 << " * " << 6 << " = " << 24 << endl;
		for (int i = 5; i < n; i += 2)
		{
			cout << i + 1 << " - " << i << " = " << 1 << endl;
			cout << 24 << " * " << 1  << " = " << 24 << endl;
		}
	}
	else
	{
		cout << "4 + 1 = 5" << endl;
		cout << "5 * 5 = 25" << endl;
		cout << "3 - 2 = 1" << endl;
		cout << "25 - 1 = 24" << endl;
		for (int i = 6; i < n; i += 2)
		{
			cout << i + 1 << " - " << i << " = 1" << endl;
			cout << "24 * 1 = " << 24 << endl;			
		}
	}
	return 0;
}
