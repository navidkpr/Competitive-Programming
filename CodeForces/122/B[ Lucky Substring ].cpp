#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int cnt_1 = 0, cnt_2 = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == &#39;4&#39;)
			cnt_1++;
		else if (s[i] == &#39;7&#39;)
			cnt_2++;
	if (cnt_1 == 0 && cnt_2 == 0)
	{
		cout << -1 << endl;
		return 0;
	}
	if (cnt_1 >= cnt_2)
		cout << 4 << endl;
	else
		cout << 7 << endl;
	return 0;
}
