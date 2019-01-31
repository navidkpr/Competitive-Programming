#include <iostream>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == i)
			cnt++;
	if (cnt == n)
	{
		cout << cnt << endl;
		return 0;
	}
	bool h = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != i && arr[arr[i]] == i)
			h = 1;
	if (h)
		cout << cnt + 2 << endl;
	else
		cout << cnt + 1 << endl;
	return 0;
}
