#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

const int MAXN = 3*1000 + 100;
int arr[MAXN];
multiset <int> st;

int32_t main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		st.insert(num);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (st.size() == 0 || *st.rbegin() < arr[i])
			cnt++;
		else
			st.erase(st.lower_bound(arr[i]));
	cout << cnt << endl;
	return 0;
}
