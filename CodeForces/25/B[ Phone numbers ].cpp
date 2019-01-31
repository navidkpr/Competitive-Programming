#include <iostream>

using namespace std;

int32_t main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int pt = 0;
	if (n == 3)
	{
		cout << s << endl;
		return 0;
	}
	if (n % 2 != 0)
	{
		pt += 3;
		cout << s[0] << s[1] << s[2] << &#39;-&#39;;
	}
	for (int i = pt; i < n; i += 2)
	{
		cout << s[i] << s[i + 1];
		if (i != n - 2)
			cout << &#39;-&#39;;
	}
	cout << endl;
	return 0;
}
