#include <iostream>

using namespace std;

char arr[9] = {&#39;6&#39;, &#39;7&#39;, &#39;8&#39;, &#39;9&#39;, &#39;T&#39;, &#39;J&#39;, &#39;Q&#39;, &#39;K&#39;, &#39;A&#39;};

int32_t main()
{
	char c;
	cin >> c;
	char k1, n1, k2, n2;
	cin >> n1 >> k1 >> n2 >> k2;
	if (k1 == c && k2 != c)
	{
		cout << "YES" << endl;
		return 0;
	}
	if (k1 != k2)
	{
		cout << "NO" << endl;
		return 0;
	}
	int num1, num2;
	for (int i = 0; i < 9; i++)
		if (n1 == arr[i])
			num1 = i;
	for (int i = 0; i < 9; i++)
		if (n2 == arr[i])
			num2 = i;
	if (num1 > num2)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}
