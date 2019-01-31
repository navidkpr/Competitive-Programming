#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];
vector <int> myvec;

int main()
{
	int n, s, t;
	cin >> n >> s >> t;
	s--;
	t--;
	if (s == t)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i]--;
	}
	int pt = arr[s];
	int cnt = 1;
	while (pt != s)
	{
		//cerr << pt << &#39; &#39;;
		if (pt == t)
		{
			cout << cnt << endl;
			return 0;
		}
		pt = arr[pt];
		cnt++;
	}
	cout << -1 << endl;
	return 0;
}
