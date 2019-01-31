#include <iostream>

using namespace std;

int s1 = -1, s2 = -1, e1 = -1, e2 = -1;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] == &#39;A&#39; && s[i + 1] == &#39;B&#39; && s1 == -1)
			s1 = i;
		if (s[i] == &#39;A&#39; && s[i + 1] == &#39;B&#39;)
			e1 = i;
		if (s[i] == &#39;B&#39; && s[i + 1] == &#39;A&#39; && s2 == -1)
			s2 = i;
		if (s[i] == &#39;B&#39; && s[i + 1] == &#39;A&#39;)
			e2 = i;
	}
	cerr << s1 << &#39; &#39; << e1 << endl;
	cerr << s2 << &#39; &#39; << e2 << endl;
	if (s1 == -1 || s2 == -1)
		cout << "NO" << endl;
	else if (e1 > s2 + 1 || e2 > s1 + 1)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl; 
	return 0;
}
