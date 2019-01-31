#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	if (n > 1 && k == 1)
	{
		cout << -1 << endl;
		return 0;
	}
	if (k > n)
	{
		cout << -1 << endl;
		return 0;
	}
	if (n == 1)
	{
		cout << "a" << endl;
		return 0;
	}
	for (int i = 0; i < n - k + 2; i++)
		if (i % 2 == 0)
			cout << &#39;a&#39;;
		else
			cout << &#39;b&#39;;
	for (int i = 0; i < k - 2; i++)
		cout << (char)(&#39;a&#39; + i + 2);
	cout << endl;
	return 0;
}
