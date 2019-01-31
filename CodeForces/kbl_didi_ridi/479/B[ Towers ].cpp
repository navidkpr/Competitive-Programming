#include <iostream>
#include <set>
#include <vector>

using namespace std;

multiset < pair <int, int> > st;
vector < pair <int, int> > myvec;

int32_t main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		st.insert(make_pair(num, i + 1));
	}
	if (st.size() == 1)
	{
		cout << 0 << &#39; &#39; << 0 << endl;
		return 0;
	}
	for (int i = 0; i < k; i++)
	{
		if ((*st.begin()).first >= (*st.rbegin()).first - 1)
		{
			cout << (*st.rbegin()).first - (*st.begin()).first << &#39; &#39; << i << endl;
			for (int i = 0; i < myvec.size(); i++)
				cout << myvec[i].first << &#39; &#39; << myvec[i].second << endl;
			return 0;
		}
		pair <int, int> ans = *st.begin();
		st.erase(st.find(ans));
		pair <int, int> ans_2 = *st.rbegin();
		st.erase(st.find(ans_2));
		ans_2.first--;
		ans.first++;
		myvec.push_back(make_pair(ans_2.second, ans.second));
		st.insert(ans);
		st.insert(ans_2);
	}
	cout << (*st.rbegin()).first - (*st.begin()).first << &#39; &#39; << k << endl;
	for (int i = 0; i < myvec.size(); i++)
		cout << myvec[i].first << &#39; &#39; << myvec[i].second << endl;
	return 0;
}
