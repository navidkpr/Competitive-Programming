#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 2*1000 + 1000;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] != -1)
			arr[i]--;
	}
	// for (int i = 0; i < n; i++)
		// cerr << arr[i] << &#39; &#39;;
	// cerr << endl;
	int max_cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		int pt = i;
		while (arr[pt] != -1)
		{
			pt = arr[pt];
			cnt++;
		}
		max_cnt = max(max_cnt, cnt);
	}
	cout << max_cnt << endl;
}
