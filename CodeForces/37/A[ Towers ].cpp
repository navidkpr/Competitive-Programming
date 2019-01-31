#include <iostream>

using namespace std;

const int MAXN = 1000 + 100;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[num]++;
	}
	int cnt = 0, max1 = 0;
	for (int i = 1; i < MAXN; i++)
		if (arr[i] > 0)
		{
			cnt++;
			max1 = max(max1, arr[i]);
		}
	cout << max1 << &#39; &#39; << cnt << endl;
}
