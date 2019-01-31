#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 30 + 10;
int arr[MAXN];
bool mrk[MAXN * MAXN];
vector <int> javab[MAXN];

int32_t main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
		cin >> arr[i];
	for (int i = 0; i < k; i++)
	{
		javab[i].push_back(arr[i] - 1);
		mrk[arr[i] - 1] = 1;
	}
	int pt = 0;
	for (int i = 0; i < n * k; i++)
	{
		while (javab[pt].size() == n)
			pt++;
		if (!mrk[i])
		{
			javab[pt].push_back(i);
			mrk[i] = 1;
		}
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < javab[i].size(); j++)
			cout << javab[i][j] + 1 << &#39; &#39;;
		cout << endl;
	}
}
