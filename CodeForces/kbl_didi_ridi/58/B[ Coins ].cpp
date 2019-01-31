#include <iostream>

using namespace std;

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
		while (n % i == 0)
		{
			cout << n << &#39; &#39;;
			n /= i;
		}
	cout << n << endl;
}
