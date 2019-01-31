#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
int a[MAXN];
int cnt_col[MAXN];
int cnt_row[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < a[i]; j++)
			cnt_row[j]++;
	for (int i = 0; i < MAXN; i++)
		 for (int j = n - 1; j >= n - cnt_row[i]; j--)
			 cnt_col[j]++;
	for (int i = 0; i < n; i++)
		cout << cnt_col[i] << &#39; &#39;;
	cout << endl;
}
