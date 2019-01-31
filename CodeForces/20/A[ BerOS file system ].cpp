#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	cout << s[0];
	int pt = s.size() - 1;
	while (s[pt] == &#39;/&#39;)
		pt--;
	for (int i = 1; i <= pt; i++)
		if (s[i] == &#39;/&#39; && s[i - 1] != &#39;/&#39;)
			cout << s[i];
		else if (s[i] != &#39;/&#39;)
			cout << s[i];
	cout << endl;
	return 0;
}
