#include <iostream>

using namespace std;

const int MAXN = 100 + 100;
char c[5] = {&#39;h&#39;, &#39;e&#39;, &#39;l&#39;, &#39;l&#39;, &#39;o&#39;};
int main()
{
	string s;
	cin >> s;
	int pt = 0;
	for (int i = 0; i < s.size(); i++)
		if (pt > 4)
			break;
		else if (s[i] == c[pt])
			pt++;
	if (pt > 4)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
