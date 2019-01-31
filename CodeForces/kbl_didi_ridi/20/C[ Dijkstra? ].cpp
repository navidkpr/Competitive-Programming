#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <deque>
#include <iomanip> 
#include <set>
#include <cstdio>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sqr(x) ((x)*(x))

typedef long long ll;
typedef pair < ll , ll> pie;
const int  maxN = 100 * 1000 + 4;
const ll INF = 1ll << 55;
vector <pie> a[maxN];
ll c[maxN];
int before[maxN];
set <pie> s;
void solve(int v)
{
  if(v != 1)
    solve(before[v]);
  cout << v << &#39; &#39;;
}
int main()
{
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  s.insert(mp(0, 1));
  c[1] = 0;
  for(int i = 2; i <= n; i ++)
    {
      s.insert(mp(INF, i));
      c[i] = INF;
    }
  for(int i = 0; i < m; i ++)
    {
      int d,k, w;
      cin >> d >> k >> w;
      a[d].pb(mp(k , w));
      a[k].pb(mp(d, w));
    }
  c[1] = 0;
  while(s.size())
    {
      pie w = *s.begin();
      ll x = w.ff;
      int y = w.ss;
      if(x == INF)
      	break;
      s.erase(mp(x, y));
      for(int i = 0; i < a[y].size(); i ++)
	{
	  if(c[a[y][i].ff] > x + a[y][i].ss)
	    {
	      s.erase(mp(c[a[y][i].ff], a[y][i].ff));
	      c[a[y][i].ff] = x + a[y][i].ss;
	      s.insert(mp(c[a[y][i].ff], a[y][i].ff));
	      before[a[y][i].ff] = y;
	    }
	}
    }
  if(c[n] == INF)
    {
      cout << "-1" << endl;
      return 0;
    }
  solve(n);
  cout << endl;
  return 0;
}
