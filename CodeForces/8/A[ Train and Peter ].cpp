#include<bits/stdc++.h>

using namespace std;
#define int long long
const int maxN = 2000 + 5;
int a[maxN];
int toi(string s)
{
    if(s.size() > 8) return maxN * maxN;
    int ans = 0;
    for(int i = 0; i < s.size(); i ++)
	  ans *= 10, ans += s[i] - &#39;0&#39;;
    return ans;
}
main() 
{
    ios::sync_with_stdio(0); cin.tie(0);
    string s, d, t; cin >> s >> d >> t;
    int tl = 1;
    if(s.find(d) == string::npos)
	  tl = 0;
    else
    {
	  int tmp = s.find(d); 
	  if(s.find(t, tmp + d.size()) == string::npos) tl = 0;
    }
    
    int fl = 1;
    //reverse(s.begin(), s.end());
    reverse(d.begin(), d.end());
    reverse(t.begin(), t.end());
    if(s.find(t) == string::npos)
	  fl = 0;
    else
    {
	  int tmp = s.find(t);
	  if(s.find(d, tmp + t.size()) == string::npos) fl = 0;
    }
    if(tl && fl) { cout << "both" << endl; return 0; }
    if(tl) { cout << "forward" << endl; return 0; }
    if(fl) { cout << "backward" << endl; return 0; }
    cout << "fantasy" << endl;
    return 0;
}
