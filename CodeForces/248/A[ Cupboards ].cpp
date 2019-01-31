#include <iostream>

using namespace std;

int32_t main()
{
	int n;
	cin >> n;
	int cnt_1 = 0, cnt_2 = 0;
	for (int i = 0; i < n; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;
		if (num1)
			cnt_1++;
		if (num2)
			cnt_2++;
	}
	cout << min(cnt_1, n - cnt_1) + min(cnt_2, n - cnt_2) << endl;
	return 0;
}
