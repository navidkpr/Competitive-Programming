#include <iostream>

using namespace std;

const int MAXN = 50;
int cnt[MAXN][2], cnt_2[MAXN][2];

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++)
		if (s1[i] <= &#39;Z&#39; && s1[i] >= &#39;A&#39;)
			cnt[s1[i] - &#39;A&#39;][1]++;
		else
			cnt[s1[i] - &#39;a&#39;][0]++;
	for (int i = 0; i < s2.size(); i++)
		if (s2[i] <= &#39;z&#39; && s2[i] >= &#39;a&#39;)
			cnt_2[s2[i] - &#39;a&#39;][0]++;
		else
			cnt_2[s2[i] - &#39;A&#39;][1]++;
	int cnt_yay = 0;
	// CERR << "WTF" << endl;
	for (int i = 0; i < 26; i++)
	{
		int num = min(cnt_2[i][0], cnt[i][0]);
		cnt_yay += num;
		cnt_2[i][0] -= num;
		cnt[i][0] -= num;
		num = min(cnt_2[i][1], cnt[i][1]);
		cnt_yay += num;
		cnt_2[i][1] -= num;
		cnt[i][1] -= num;
	}
	cout << cnt_yay << &#39; &#39;;
	int cnt_whoops = 0;
	for (int i = 0; i < 26; i++)
	{
		cnt_whoops += min(cnt_2[i][0] + cnt_2[i][1], cnt[i][1] + cnt[i][0]);
	}
	cout << cnt_whoops << endl;
}
