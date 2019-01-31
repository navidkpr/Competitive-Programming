#include <iostream>

using namespace std;

const int MAXN = 100 + 100;
int arr[MAXN];

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int cnt_2 = 0;
		while (arr[i])
		{
			if (arr[i] % 10 == 4 || arr[i] % 10 == 7)
				cnt_2++;
			arr[i] /= 10;
		}
		if (cnt_2 <= k)
			cnt++;
	}
	cout << cnt << endl;
}
