#include <iostream>
#define int long long

using namespace std;

const int MAXN = 400;
int d[MAXN][MAXN];

int32_t main()
{
	 int n;
	 cin >> n;
	 for (int i = 0; i < n; i++)
	 	for (int j = 0; j < n; j++)
	 		cin >> d[i][j];
	 int q;
	 cin >> q;
	 // cerr << q << endl;
	 for (int x = 0; x < q; x++)
	 {
	 	int u, v, w;
	 	cin >> u >> v >> w;
	 	u--; v--;
	 	for (int i = 0; i < n; i++)
	 		for (int j = 0; j < n; j++)
	 		{
	 			if (d[i][u] + w + d[j][v] < d[i][j])
	 				d[i][j] = d[i][u] + w + d[j][v];
	 			if (d[i][v] + w + d[j][u] < d[i][j])
	 				d[i][j] = d[i][v] + w + d[j][u];
	 		}
	 	// cerr << u << &#39; &#39; << v << endl;
	 	int sum = 0;
	 	for (int i = 0; i < n; i++)
	 		for (int j = i + 1; j < n; j++)
	 			sum += d[i][j];
	 	cout << sum << &#39; &#39;;
	 }
	 cout << endl;
}
