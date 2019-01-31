#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 2*10000 + 10000;
int a[MAXN];
int answer[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		for (int j = 0; j < n; j++)
			if (a[j] > a[i])
				cnt++;
		answer[i] = cnt;
	}
	for (int i = 0; i < n; i++)
		cout << answer[i] << &#39; &#39;;
	cout << endl;
	return 0;
}
