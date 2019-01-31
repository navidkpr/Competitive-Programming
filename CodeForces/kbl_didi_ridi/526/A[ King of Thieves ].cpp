#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	for (int i = 0; i <= n - 5; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			bool h = 1;
			int cnt = 0;
			for (int k = i; k < n; k+=j)
			{
				if (s[k] == &#39;.&#39;)
					h = 0;
				cnt++;
				if (cnt == 5)
					break;
			}
			if (h && cnt == 5)
			{
				// cerr << i << &#39; &#39; << j << endl;
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;
	return 0;
}
