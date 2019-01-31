#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000*1000 + 100;
int m[MAXN];
vector <int> arr[MAXN];

int main()
{
	int k, n;
	cin >> k >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
		for (int j = 0; j < m[i]; j++)
		{
			int num;
			cin >> num;
			arr[i].push_back(num);
		}	
	}
	int cnt_gp = k - 1;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i][0] == 1)
			for (int j = 1; j < arr[i].size(); j++)
			{
				if (arr[i][j] == arr[i][j - 1] + 1)
				{
					cnt--;
					cnt_gp--;
				}
				else
					break;
			}
	}
//	cerr << cnt_gp << &#39; &#39;;
	for (int i = 0; i < n; i++)
		cnt += arr[i].size() - 1;
	cout << cnt + cnt_gp << endl;
	return 0;
}
