#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN], l[MAXN];
set <int> st;
int cnt[MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < m; i++)
		cin >> l[i];
	for (int i = n - 1; i >= 0; i--)
	{
		st.insert(arr[i]);
		cnt[i] = (int)st.size();
	}
	for (int i = 0; i < m; i++)
		cout << cnt[l[i] - 1] << endl;
	return 0;
}
