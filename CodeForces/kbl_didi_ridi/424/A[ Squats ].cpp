#include <iostream>

using namespace std;

const int MAXN = 300;
char arr[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt_1 = 0, cnt_2 = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == &#39;x&#39;)
			cnt_1++;
		else
			cnt_2++;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (cnt_1 < n / 2 && arr[i] == &#39;X&#39;)
		{
			cnt++;
			cnt_1++;
			cnt_2--;
			arr[i] = &#39;x&#39;;
		}
		if (cnt_2 < n / 2 && arr[i] == &#39;x&#39;)
		{
			cnt++;
			cnt_1--;
			cnt_2++;
			arr[i] = &#39;X&#39;;
		}
	}
	cout << cnt << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i];
	cout << endl;
	return 0;
}
