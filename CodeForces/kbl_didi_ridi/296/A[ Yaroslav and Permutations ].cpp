#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1000 + 100;
int arr[MAX];
int cnt[MAX];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		cnt[arr[i]]++;
	sort(cnt, cnt + MAX);
	if (cnt[MAX - 1] <= (n + 1) / 2)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}
