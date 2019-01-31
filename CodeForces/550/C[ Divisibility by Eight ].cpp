#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
int arr[MAXN];

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		arr[i] = s[i] - &#39;0&#39;;
	int n = (int)s.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
				if ((arr[i] * 4 + arr[j] * 2 + arr[k]) % 8 == 0)
				{
					cout << "YES" << endl << arr[i] * 100 + arr[j] * 10 + arr[k] << endl;
					return 0;
				}
			if ((arr[i] * 2 + arr[j]) % 8 == 0)
			{
				cout << "YES" << endl << arr[i] * 10 + arr[j] << endl;
				return 0;
			}
		}
		if (arr[i] % 8 == 0)
		{
			cout << "YES" << endl << arr[i] << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
