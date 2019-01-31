#include <iostream>
#include <vector>
#include <set>

using namespace std;

int32_t main()
{
	int n;
	cin >> n;
	vector <int> myvec;
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			myvec.push_back(i);
			if (i * i != n)
				myvec.push_back(n / i);
		}
	}
	set <int> st;
	int cnt = 0;
	while (n)
	{
		st.insert(n % 10);
		n /= 10;
	}
	for (int i = 0; i < myvec.size(); i++)
	{
		int num = myvec[i];
		bool h = 0;
		while (num)
		{
			if (st.find(num % 10) != st.end())
				h = 1;
			num /= 10;
		}
		cnt += h;
	}
	cout << cnt << endl;
	return 0;
}
