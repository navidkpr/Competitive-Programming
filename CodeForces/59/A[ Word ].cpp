#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int cnt_up = 0, cnt_low = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] >= &#39;A&#39; && s[i] <= &#39;Z&#39;)
			cnt_up++;
		else
			cnt_low++;
	if (cnt_up > cnt_low)
	{
		for (int i = 0; i < s.size(); i++)
			if (s[i] <= &#39;z&#39; && s[i] >= &#39;a&#39;)
				s[i] = s[i] + &#39;A&#39; - &#39;a&#39;;
	}
	else
		for (int i = 0; i < s.size(); i++)
			if (s[i] <= &#39;Z&#39; && s[i] >= &#39;A&#39;)
				s[i] = s[i] - &#39;A&#39; + &#39;a&#39;;
	cout << s << endl;
}
