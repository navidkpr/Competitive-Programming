#include <iostream>

using namespace std;

const int MAXN = 100;
char c[MAXN];

int main()
{
	int n, t;
	cin >> n >> t;
	for (int i = 0; i < n; i++)
		cin >> c[i];
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < n - 1; j++)
			if (c[j] == &#39;B&#39; && c[j + 1] == &#39;G&#39;)
			{
				swap(c[j], c[j + 1]);
				j++;
			}
	}
	for (int i = 0; i < n; i++)
		cout << c[i];
	cout << endl;
	return 0;
}
