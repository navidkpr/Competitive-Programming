#include <iostream>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int pt = s.size() - 1;
	while (!(s[pt] <= &#39;z&#39; && s[pt] >= &#39;a&#39;) && !(s[pt] >= &#39;A&#39; && s[pt] <= &#39;Z&#39;))
	{
		pt--;
	}
	char c = s[pt];
	// cerr << c << endl;
	char ans[6] = {&#39;a&#39;, &#39;e&#39;, &#39;u&#39;, &#39;o&#39;, &#39;y&#39;, &#39;i&#39;};
	for (int i = 0; i < 6; i++)
		if (c == ans[i] || c == ans[i] - &#39;a&#39; + &#39;A&#39;)
		{
			cout << "YES" << endl;
			return 0;
		}
	cout << "NO" << endl;
	return 0;
}
