#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int y, k, n;
	cin >> y >> k >> n;
	bool h = 0;
	for (int i = k; i <= n; i += k)
	{
		if (i - y > 0)
		{
			h = 1;
			cout << i - y << &#39; &#39;;
		}
	}
	if (!h)
		cout << -1;
	cout << endl;
	return 0;
}
