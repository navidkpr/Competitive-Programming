#include <iostream>

using namespace std;

int32_t main()
{
	int n, k, t;
	cin >> n >> k >> t;
	int prog = t * (n * k) / 100;
	for (int i = 0; i < prog / k; i++)
		cout << k << &#39; &#39;;
	if (n != prog / k)
		cout << prog % k << &#39; &#39;;
	for (int i = 0; i < n - (prog / k) - 1; i++)
		cout << 0 << &#39; &#39;;
	cout << endl;
	return 0;
}
