#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1000*100 + 1000;
string s[10];
string arr[10];
int d[MAXN];
int f[MAXN];

void kmp_2(string s1, string s2)
{
	for (int i = 0; i < MAXN; i++)
		d[i] = f[i] = 0;
	int n = s1.size(), m = s2.size();
	f[0] = 0;
	for (int i = 1; i < m; i++)
	{
		int ans = f[i - 1] - 1;
		while (ans >= 0)
		{
			if (s2[ans + 1] == s2[i])
			{
				ans++;
				break;
			}
			ans = f[ans] - 1;
		}
		if (ans == -1 && s2[i] == s2[0])
			ans = 0;
		f[i] = ans + 1;
	}
	f[m] = f[m - 1];
	if (s1[0] == s2[0])
		d[0] = 1;
	for (int i = 1; i < n; i++)
	{
		if (s1[i] == s2[d[i - 1]])
		{
			d[i] = d[i - 1] + 1;
			continue;
		}
		int ans = f[d[i - 1] - 1] - 1;
		while (ans != -1)
		{
			if (s1[i] == s2[ans + 1])
			{
				ans++;
				break;
			}
			ans = f[ans] - 1;
		}
		if (ans == -1 && s1[i] == s2[0])
			ans = 0;
		d[i] = ans + 1;
	}
}

void kmp(string s1, string s2)
{
	for (int i = 0; i < s1.size(); i++)
		d[i] = 0;
	for (int i = 0; i < s1.size(); i++)
		for (int j = i; j < s1.size(); j++)
			if (s1[j] != s2[j - i])
			{
				d[i] = j - 1 - i + 1;
				break;
			}
			else if (j == s1.size() - 1)
				d[i] = j - i + 1;
}

int32_t main()
{
	int n = 3;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	sort(s, s + n);
	// cerr << s[0].size() + s[1].size() + s[2].size() << endl;
	int min_sum = 1000*1000*1000;
	do
	{
		// cerr << s[0] << &#39; &#39; << s[1] << &#39; &#39; << s[2] << endl;
		int sum = s[1].size();
		reverse(s[0].begin(), s[0].end());
		reverse(s[1].begin(), s[1].end());
		kmp_2(s[1], s[0]);
		// for (int i = 0; i < s[1].size(); i++)
		// 	cerr << d[i] << &#39; &#39;;
		// cerr << endl;
		reverse(s[0].begin(), s[0].end());
		reverse(s[1].begin(), s[1].end());
		int max_size = d[s[1].size() - 1];
		for (int i = 0; i < s[1].size(); i++)
			if (d[i] == s[0].size())
				max_size = max(max_size, d[i]);
		sum += s[0].size() - max_size;
		kmp_2(s[1], s[2]);
		max_size = d[s[1].size() - 1];
		// for (int i = 0; i < s[1].size(); i++)
		// 	cerr << d[i] << &#39; &#39;;
		// cerr << endl << endl;
		for (int i = 0; i < s[1].size(); i++)
			if (d[i] == s[2].size())
				max_size = max(max_size, d[i]);
		sum += s[2].size() - max_size;
		min_sum = min(min_sum, sum);
	}
	while (next_permutation(s, s + n));
	cout << min_sum << endl;
	return 0;
}
