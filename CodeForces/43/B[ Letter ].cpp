#include <iostream>

using namespace std;

const int MAXN = 100;
int cnt[MAXN][2];

int32_t main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0; i < s1.size(); i++)
		if (s1[i] >= &#39;a&#39; && s1[i] <= &#39;z&#39;)
			cnt[s1[i] - &#39;a&#39;][0]++;
		else if (s1[i] >= &#39;A&#39; && s1[i] <= &#39;Z&#39;)
			cnt[s1[i] - &#39;A&#39;][1]++;
	for (int i = 0; i < s2.size(); i++)
		if (s2[i] >= &#39;a&#39; && s2[i] <= &#39;z&#39;)
			cnt[s2[i] - &#39;a&#39;][0]--;
		else if (s2[i] >= &#39;A&#39; && s2[i] <= &#39;Z&#39;)
			cnt[s2[i] - &#39;A&#39;][1]--;
	for (int i = 0; i < 26; i++)
		if (cnt[i][0] < 0 || cnt[i][1] < 0)
		{
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
