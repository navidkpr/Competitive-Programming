#include <iostream>
#include <vector>
#include <algorithm>
#define int long long

using namespace std;

const int INF = 1000*1000*1000;
const int MAXN = 500 + 10;
const int MAX = 100*1000 + 1000;
vector <int> myvec;
bool mrk[MAX + 10];
int arr[MAXN][MAXN];

void run_gharbal(int n)
{
	for (int i = 2; i <= n; i++)
		if (!mrk[i])
		{
			for (int j = 2 * i; j <= n; j += i)
				mrk[j] = 1;
			myvec.push_back(i);
		}
}

int32_t main()
{
	run_gharbal(MAX - 1);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	int min_sum = INF;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
			sum += *lower_bound(myvec.begin(), myvec.end(), arr[i][j]) - arr[i][j];
		min_sum = min(min_sum, sum);
	}
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
			sum += *lower_bound(myvec.begin(), myvec.end(), arr[j][i]) - arr[j][i];
		min_sum = min(min_sum, sum);
	}
	cout << min_sum << endl;
	return 0;
}
