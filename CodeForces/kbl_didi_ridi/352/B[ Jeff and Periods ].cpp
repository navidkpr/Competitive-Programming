#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#define int long long

using namespace std;

const int MAXN = 100*1000 + 1000;
map <int, pair <int, int> > mp;
bool mrk[MAXN];
int arr[MAXN];
vector < pair <int ,int> > myvec;

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (mrk[arr[i]])
			continue;
		if (mp.find(arr[i]) == mp.end())
			mp[arr[i]] = make_pair(i, 0);
		else if (mp[arr[i]].second == 0)
		{
			pair <int, int> ans = mp[arr[i]];
			ans.second = i - ans.first;
			ans.first = i;
			mp[arr[i]] = ans;
		}
		else
		{
			pair <int, int> ans = mp[arr[i]];
			if (ans.second == i - ans.first)
			{
				ans.first = i;
				mp[arr[i]] = ans;
			}
			else
				mrk[arr[i]] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i < MAXN; i++)
		if (!mrk[i] && mp.find(i) != mp.end())
		{
			cnt++;
			myvec.push_back(make_pair(i, mp[i].second));
		}
	cout << cnt << endl;
	for (int i = 0; i < myvec.size(); i++)
		cout << myvec[i].first << &#39; &#39; << myvec[i].second << endl;
	return 0;
}
