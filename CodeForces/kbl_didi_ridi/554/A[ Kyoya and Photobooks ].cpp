#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int cnt = 0;
	int cnt_ans = 1;
	for (int i = 1; i < s.size(); i++)
		if (s[i] != s[i - 1])
		{
			cnt += cnt_ans;
			cnt_ans = 1;		
		}
		else
			cnt_ans++;
	cnt += cnt_ans;
	cout << 26 * (s.size() + 1) - cnt;
}
