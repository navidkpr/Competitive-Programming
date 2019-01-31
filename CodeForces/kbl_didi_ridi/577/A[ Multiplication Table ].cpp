#include <iostream>

using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int cnt = 0;
	for (int i = 1; i * i <= x; i++)
	{
		if (i > n || x / i > n)
			continue;
		if (x % i == 0)
		{
			cnt++;
			if (i * i != x)
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
