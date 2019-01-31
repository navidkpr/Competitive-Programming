#include <iostream>
#include <map>
#define int long long

using namespace std;

const int MAXN = 200 * 1000;
map <int, int> l, r;
int arr[MAXN];

int32_t main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (r.find(arr[i]) != r.end())
			r[arr[i]]++;
		else
			r[arr[i]] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		r[arr[i]]--;
		if (arr[i] % k == 0)
			cnt += l[arr[i] / k] * r[arr[i] * k];
		if (l.find(arr[i]) != l.end())
			l[arr[i]]++;
		else
			l[arr[i]] = 1;
	}
	cout << cnt << endl;
	return 0;
}
