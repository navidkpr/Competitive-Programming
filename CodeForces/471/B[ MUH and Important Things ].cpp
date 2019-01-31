#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define int long long
#define pii pair <int, int>
#define endl &#39;\n&#39;
#define mp(x, y) make_pair(x, y)

using namespace std;

const int MAXN = 2*1000 + 100;
pair <int, int> arr[MAXN];
vector < pii > myvec;

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr, arr + n);
	for (int i = 0; i < n - 2; i++)
		if (arr[i].first == arr[i + 1].first && arr[i + 1].first == arr[i + 2].first)
		{
			cout << "YES" << endl;
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < i; k++)
					cout << arr[k].second << &#39; &#39;;
				cout << arr[i + j].second << &#39; &#39;;
				for (int k = i; k < i + 3; k++)
					if (k != i + j)
						cout << arr[k].second << &#39; &#39;;
				for (int k = i + 3; k < n; k++)
					cout << arr[k].second << &#39; &#39;;
				cout << endl;
			}
			return 0;
		}
	// cerr << myvec.size() << endl;
	for (int i = 0; i < n - 1; i++)
		if (arr[i].first == arr[i + 1].first)
			myvec.push_back(make_pair(i, i));
		// cerr << myvec.size() << endl;
	if (myvec.size() < 2)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i != myvec[0].first && i != myvec[1].first)
			cout << arr[i].second << &#39; &#39;;
		else if (i == myvec[0].first)
		{
			cout << arr[i].second << &#39; &#39; << arr[i + 1].second << &#39; &#39;;
			i++;
		}
		else if (i == myvec[1].first)
		{
			cout << arr[i].second << &#39; &#39; << arr[i + 1].second << &#39; &#39;;
			i++;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i != myvec[0].first && i != myvec[1].first)
			cout << arr[i].second << &#39; &#39;;
		else if (i == myvec[0].first)
		{
			cout << arr[i + 1].second << &#39; &#39; << arr[i].second << &#39; &#39;;
			i++;
		}
		else if (i == myvec[1].first)
		{
			cout << arr[i].second << &#39; &#39; << arr[i + 1].second << &#39; &#39;;
			i++;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i != myvec[0].first && i != myvec[1].first)
			cout << arr[i].second << &#39; &#39;;
		else if (i == myvec[0].first)
		{
			cout << arr[i].second << &#39; &#39; << arr[i + 1].second << &#39; &#39;;
			i++;
		}
		else if (i == myvec[1].first)
		{
			cout << arr[i + 1].second << &#39; &#39; << arr[i].second << &#39; &#39;;
			i++;
		}
	}
	cout << endl;
}
