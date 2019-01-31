#include <bits/stdc++.h>

using namespace std;

const int MaxN=300+10;
int a[MaxN];
bool mark[MaxN][MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j){
			char c;
			cin >> c;
			mark[i][j]=(c==&#39;1&#39;);
		}
	for (int l=0;l<n;++l)
		for (int i=0;i<n;++i)
			for (int j=0;j<n;++j)
				mark[i][j]|=mark[i][l]&mark[l][j];
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			if (a[i]>a[j] && mark[i][j]==true)
				swap(a[i],a[j]);
	for (int i=0;i<n;++i)
		cout << a[i] << " ";
}
