#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAXN = 1000*1000 + 1000;
int f[MAXN];
int kid[MAXN];

int main()
{
	string s;
	int n;
	cin >> s; 
	n = s.size();
	int k = 0;
	for (int i = 1; i < n; i++)
	{
		while (k && s[i] != s[k]) 
			k = f[k-1];
		if (s[i] == s[k])
			k++;
		f[i] = k;
		kid[k]++;
	}
	if (f[s.size() - 1] == 0)
		cout << "Just a legend" << endl;
	else if (kid[f[n-1]] > 1) 
		cout << s.substr(0, f[n-1]) << endl;
	else if (f[f[n-1]-1]!=0) 
		cout << s.substr(0,f[f[n-1]-1]) << endl;
	else 
		cout << "Just a legend" << endl;
}
