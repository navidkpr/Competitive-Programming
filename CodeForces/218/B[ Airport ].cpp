#include <iostream>
#include <set>
#define int long long

using namespace std;

const int MAXN = 1000 + 100;
multiset <int> st, st_2;

int32_t main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		st.insert(num);
		st_2.insert(num);
	}
	int sum = 0, sum_2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (st.size() == 0)
			break;
		int ans = *st_2.rbegin();
		sum_2 += ans;
		st_2.erase(st_2.find(ans));
		ans--;
		if (ans > 0)
			st_2.insert(ans);
	}
	for (int i = 0; i < n; i++)
	{
		if (st.size() == 0)
			break;
		int ans = *st.begin();
		st.erase(st.find(ans));
		// cerr << ans << &#39; &#39;;
		sum += ans;
		// cerr << sum << endl;
		ans--;
		if (ans > 0)
			st.insert(ans);
	}
	// cerr << endl;
	cout << sum_2 << &#39; &#39; << sum << endl;
}
