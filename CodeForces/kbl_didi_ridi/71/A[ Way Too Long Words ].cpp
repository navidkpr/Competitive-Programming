#include <iostream>
#include <string>

using namespace std;
string s[105];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		if (s[i].size() <= 10)
			cout << s[i] << endl;
		else
			cout << s[i][0] << s[i].size() - 2 << s[i][s[i].size() - 1] << endl;
	}
}
