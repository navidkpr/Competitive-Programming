#include <iostream>

using namespace std;

const int MOD = 1000*1000*1000 + 7;
const int MAXN = 100 + 10, MAXM = 26 * 100 + 100;
int dp[MAXN][MAXM];

int32_t main()
{
	int n = 100;
	int m = 26 * 100;
	for (int i = 1; i <= 26; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= m; j++)
			for (int k = 1; k <= 26; k++)
				if (j - k >= 0)
					dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		int sum = 0;
		for (int j = 0; j < s.size(); j++)
			sum += s[j] - &#39;a&#39; + 1;
		cout << dp[s.size()][sum] - 1 << &#39;\n&#39;;
	}
	return 0;
}
