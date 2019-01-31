#include <iostream>

using namespace std;

const int MAXN = 1000 + 100;
int arr[MAXN];
int cnt_0, cnt_5;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			cnt_0++;
		else 
			cnt_5++;
	if (cnt_0 == 0)
	{
		cout << -1 << endl;
		return 0;
	}
	if (cnt_5 < 9)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < (cnt_5 / 9) * 9; i++)
		cout << &#39;5&#39;;
	for (int i = 0; i < cnt_0; i++)
		cout << &#39;0&#39;;
	cout << endl;
	return 0;
}
