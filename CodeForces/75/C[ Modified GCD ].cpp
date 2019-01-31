#include <iostream>
#include <vector>
#define endl &#39;\n&#39;
#include <algorithm>

using namespace std;

vector <int> myvec;

int32_t main()
{
	int a, b, n;
	cin >> a >> b >> n;
	for (int i = 1; i * i <= a; i++)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
				myvec.push_back(i);
			if (i * i != a && b % (a / i) == 0 && a % (a / i) == 0)
				myvec.push_back(a / i);
		}
	}
	// cout << endl;
	myvec.push_back(1000*1000*1000*2);
	sort(myvec.begin(), myvec.end());
	// cout << *upper_bound(myvec.begin(), myvec.end(), 11) << endl;
	for (int i = 0; i < n; i++)
	{
		int low, high;
		cin >> low >> high;
		int num = *(upper_bound(myvec.begin(), myvec.end(), high) - 1);
		// cerr << num << &#39; &#39; << low << &#39; &#39; << high << endl;
		if (num >= low)
			cout << num << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
