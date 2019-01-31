#include <iostream>
#include <set>

using namespace std;

const int MAX = 100;
int mrk[MAX];

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		mrk[s[i] - &#39;a&#39;]++;
	int cnt = 0;
	for (int i = 0; i < MAX; i++)
		if (mrk[i] > 0)
		{
			cerr << (char)(i + &#39;a&#39;) << &#39; &#39;;
			cnt++;
		}
	cerr << endl;
	if (cnt % 2 == 1)
		cout << "IGNORE HIM!" << endl;
	else
		cout << "CHAT WITH HER!" << endl;
	return 0;
}
