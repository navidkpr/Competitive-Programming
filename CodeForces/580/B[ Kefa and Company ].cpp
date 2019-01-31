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
#define int long long
#include <cmath>
#include <cstdlib>
#include <ctime>
#define pb push_back
#define mp make_pair
#define pii  pair <int, int> 
#define debug(x) cerr << #x << " = " << (x) << endl;
#define X first
#define Y second
#define scan(x) do{while((x=getchar())<&#39;0&#39;); for(x-=&#39;0&#39;; &#39;0&#39;<=(_=getchar()); x=(x<<3)+(x<<1)+_-&#39;0&#39;);}while(0)
char _;

using namespace std;

template <typename T1, typename T2>
inline int max(T1 a, T2 b) { return (a > b? a : b); }

template <typename T1, typename T2>
inline int min(T1 a, T2 b) { return (a < b? a : b); }

const int MAXN = 100*1000 + 1000;
pii arr[MAXN];
int b[MAXN];
int sum[MAXN];

int32_t main()
{
	int n, d;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> arr[i].X >> arr[i].Y;
	sort(arr, arr + n);
	queue < pii > q;
	int sum = 0;
	int max_sum = 0;
	for (int i = 0; i < n; i++)
	{
		while (!q.empty() && (q.front()).X <= arr[i].X - d)
		{
			sum -= (q.front()).Y;
			q.pop();
		}
		q.push(arr[i]);
		sum += arr[i].Y;
		max_sum = max(max_sum, sum);
	}
	cout << max_sum << endl;
	return 0;
}

