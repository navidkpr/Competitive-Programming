#include <iostream>

using namespace std;

const int MAXN = 3*1000 + 100;
bool mrk[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; 
		cin >> num;
		mrk[num] = 1;
	}
	for (int i = 1; i < MAXN; i++)
		if (!mrk[i])
		{
			cout << i << endl;
			return 0;
		}
}
