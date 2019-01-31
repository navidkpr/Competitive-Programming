#include <bits/stdc++.h>

using namespace std;
#define int long long
const int maxN = 100*1000 + 321;

main()
{
  ios::sync_with_stdio(0);
  int n; cin >> n;
  for(int i = 1; i * ( i + 1) / 2 <= n; i ++)
    {
      int u = i * (i + 1) / 2, k = 2 * (n - u); k = sqrt(k); if(k == 0) continue;
      if(k * (k + 1) / 2 == n - u) { cout << "YES" << endl; return 0; }
    }
  cout << "NO" << endl; 
  return 0;
}
