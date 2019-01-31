#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	if (n / 2 > k || (n == 1 && k > 0))
	{
		cout << -1 << endl;
		return 0;
	}
	if (n == 1 && k == 0)
	{
		cout << 1 << endl;
		return 0;
	}
	int num = k - (n - 2) / 2;
	while (num <= 100*1000*1000)
		num *= 10;
	cout << k - (n - 2) / 2 << &#39; &#39; << num << &#39; &#39;;
	for (int i = 0; i < n - 2; i++)
		cout << k - (n - 2) / 2 + i + 2 << &#39; &#39;;
	cout << endl;
	return 0;
}
