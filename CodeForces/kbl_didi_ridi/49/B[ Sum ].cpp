#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int32_t main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int max_base = s1[0] - &#39;0&#39;;
	for (int i = 0; i < s1.size(); i++)
		max_base = max(max_base, s1[i] - &#39;0&#39;);
	for (int i = 0; i < s2.size(); i++)
		max_base = max(max_base, s2[i] - &#39;0&#39;);
	max_base++;
	// cerr << max_base << endl;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	if (s1.size() < s2.size())
		for (int i = 0; i < s2.size() - s1.size(); i++)
			s1 += &#39;0&#39;;
	else 
		for (int i = 0; i < s1.size() - s2.size(); i++)
			s2 += &#39;0&#39;;
	// cerr << s1 << &#39; &#39; << s2 << endl;
	int ans = 0;
	vector <int> myvec;
	for (int i = 0; i < max(s1.size(), s2.size()); i++)
	{
		int sum = (i < s1.size()? s1[i] - &#39;0&#39; : 0) + (i < s2.size()? s2[i] - &#39;0&#39; : 0) + ans;
		myvec.push_back(sum % max_base);
		ans = sum / max_base;
	}
	if (ans)
		myvec.push_back(ans);
	cout << myvec.size() << endl;
	return 0;
}
