#include <iostream>
#include <vector>

using namespace std;

vector <int> myvec;

int32_t main()
{
	int a, b, n;
	cin >> a >> b >> n;
	int ans = -1;
	for (int i = 0; i < 10; i++)
		if ((a * 10 + i) % b == 0)
			ans = i;
	if (ans == -1)
	{
		cout << -1 << endl;
		return 0;
	}
	int num = ans;
	ans = -1;
	for (int i = 0; i < 10; i++)
		if (i % b == 0)
			ans = i;
	if (n == 1)
	{
		cout << a << num << endl;
		return 0;
	}
	if (ans == -1)
	{
		cout << -1 << endl;
		return 0;
	}
	cout << a << num;
	for (int i = 0; i < n - 1; i++)
		cout << ans;
	cout << endl;
	return 0;
}
