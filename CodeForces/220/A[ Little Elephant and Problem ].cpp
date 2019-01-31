#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN], b[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		b[i] = arr[i];
	sort(b, b + n);
	// for (int i = 0; i < n; i++)
	// 	cerr << arr[i] << &#39; &#39; << b[i] << endl;
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != b[i])
			cnt++;
	// cerr << cnt << endl;
	if (cnt <= 2)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}
