#include <iostream>

using namespace std;

const int MAX = 1000*1000 + 100;
bool mrk[MAX];

int main()
{
	int n;
	cin >> n;
	int max_t = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		char c;
		cin >> c >> num;
		if (c == &#39;+&#39;)
		{
			if (!mrk[num])
			{
				mrk[num] = 1;
				cnt++;
			}
		}
		if (c == &#39;-&#39;)
		{
			if (!mrk[num])
			{
				max_t++;			}
			else
			{
				mrk[num] = 0;
				cnt--;
			}
		}
		// cerr << i + 1 << &#39; &#39; << cnt << endl;
		max_t = max(max_t, cnt);
	}
	cout << max_t << endl;
	return 0;
}
