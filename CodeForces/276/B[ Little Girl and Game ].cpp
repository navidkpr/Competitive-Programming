#include <iostream> 

using namespace std;

const int MAX = 100;
int cnt[MAX];

int main()
{
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++)
		cnt[s[i] - &#39;a&#39;]++;
	bool h = 1;
	for (int i = 0; i < MAX; i++)
		if (cnt[i] % 2 == 1)
			h = 0;
	if (h)
	{
		cout << "First" << endl;
		return 0;
	}
	if (s.size() % 2 == 0)
		cout << "Second" << endl;
	else
		cout << "First" << endl;
	return 0;
}
