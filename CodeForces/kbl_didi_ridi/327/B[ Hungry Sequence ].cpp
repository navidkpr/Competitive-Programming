#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 10*1000*1000;
bool mrk[MAXN];
vector <int> myvec;

int main()
{
	int n = 10*1000*1000;
	int m; cin >> m;
	int cnt = 0;
	for (int i = 2; i < n; i++)
	{
		if (cnt == m)
		{
			for (i = 0; i < myvec.size(); i++)
				cout << myvec[i] << &#39; &#39;;
			cout << endl;
			return 0;
		}
		if (!mrk[i])
		{
			for (int j = 2 * i; j < n; j += i)
				mrk[j] = 1;
			cnt++;
			myvec.push_back(i);
		}
	}
}
