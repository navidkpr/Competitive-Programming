#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100*1000 + 1000;
vector <int> myvec;
bool arr[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			myvec.push_back(i);
			if (i != n / i)
				myvec.push_back(n / i);
		}
	}
	bool h = 0;
	for (int i = 0; i < myvec.size(); i++)
		for (int j = 0; j < myvec[i]; j++)
		{
			if (!arr[j])
				continue;
			bool g = 1;
			if (n / myvec[i] < 3)
				continue;
			for (int k = j; k < n; k += myvec[i])
				g = g & arr[k];
			// if (g)
			// 	cerr << myvec[i] << &#39; &#39; << j << endl;
			h = h | g;
		}
	if (h)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
