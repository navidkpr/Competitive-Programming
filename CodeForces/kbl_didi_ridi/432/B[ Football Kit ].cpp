#include <iostream>

using namespace std;

const int MAXN = 100*1000 + 1000;
int home[MAXN], away[MAXN], cnt[MAXN];

int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> home[i] >> away[i];
	for (int i = 0; i < n; i++)
		cnt[home[i]]++;
	for (int i = 0; i < n; i++)
		cout << n - 1 + cnt[away[i]] << &#39; &#39; << n - 1 - cnt[away[i]] << endl;
	return 0;
}
