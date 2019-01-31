#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
const int INF = 1000*1000*1000;
int speed[MAXN], ram[MAXN], hdd[MAXN], cost[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];
	int min_cost = INF;
	int min_index = -1;
	for (int i = 0; i < n; i++)
	{
		bool h = 1;
		for (int j = 0; j < n; j++)
			if (speed[j] > speed[i] && hdd[j] > hdd[i] && ram[j] > ram[i])
				h = 0;
		if (h && min_cost > cost[i])
		{
			min_cost = cost[i];
			min_index = i;
		}
	}
	cout << min_index + 1 << endl;
	return 0;
}
