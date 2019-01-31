#include <iostream>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.size();

	for (int i = 0; i < n; i++)
		if (s1[i] <= &#39;Z&#39; && s1[i] >= &#39;A&#39;)
			s1[i] = &#39;a&#39; + s1[i] - &#39;A&#39;;
	for (int i = 0; i < n; i++)
		if (s2[i] <= &#39;Z&#39; && s2[i] >= &#39;A&#39;)
			s2[i] = &#39;a&#39; + s2[i] - &#39;A&#39;;
	
	for (int i = 0; i < n; i++)
	{
		if (s1[i] > s2[i])
		{
			cout << 1 << endl;
			return 0;
		}
		else if (s2[i] > s1[i])
		{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}
