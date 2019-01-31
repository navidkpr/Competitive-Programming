#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 300*1000 + 1000;
char s[MAXN];
vector <int> myvec;

int main()
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	int ans = 0;
	for (int i = 0; i < n - 1; i++)
		if (s[i] == &#39;.&#39; && s[i + 1] == &#39;.&#39;)
			ans++;
	for (int i = 0; i < m; i++)
	{
		int x;
		char c;
		cin >> x >> c;
		x--;
		if (s[x] != &#39;.&#39; && c == &#39;.&#39;)
		{
			int cnt = 0;
			if (s[x + 1] == &#39;.&#39;)
				cnt++;
			if (x - 1 >= 0 && s[x - 1] == &#39;.&#39;)
				cnt++;
			ans += cnt;
		}
		else if (s[x] == &#39;.&#39; && c != &#39;.&#39;)
		{
			int cnt = 0;
			if (s[x + 1] == &#39;.&#39;)
				cnt++;
			if (s[x - 1] == &#39;.&#39; && x - 1 >= 0)
				cnt++;
			ans -= cnt;
		}
		myvec.push_back(ans);
		s[x] = c;
	}	
	for (int i = 0; i < myvec.size(); i++)
		cout << myvec[i] << endl;
	return 0;
}
