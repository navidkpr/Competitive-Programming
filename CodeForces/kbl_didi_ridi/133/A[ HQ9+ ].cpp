#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == &#39;H&#39; || s[i] == &#39;Q&#39; || s[i] == &#39;9&#39;)
		{
			cout << "YES" << endl;
			return 0;
		}
	cout << "NO" << endl;
}
