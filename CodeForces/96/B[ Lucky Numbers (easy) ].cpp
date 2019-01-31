#include <bits/stdc++.h>

using namespace std;

bool mark[15];
vector <long long> v;

int fact(int n){
	if (n==1)
		return 1;
	return n*fact(n-1);
}

int len(int n){
	int x=n;
	int l=0;
	while (x){
		++l;
		x/=10;
	}
	return l;
}

int main(){
	int n;
	cin >> n;
	int l=len(n);
	if (l%2){
		for (int i=0;i<l/2+1;++i)
			cout << 4;
		for (int i=0;i<l/2+1;++i)
			cout << 7;
		return 0;
	}
	for (int i=l/2;i<l;++i)
		mark[i]=true;
	for (int ind=0;ind<fact(l)/fact(l/2)/fact(l/2);++ind){
		long long x=0;
		for (int i=0;i<l;++i){
			x*=10;
			if (mark[i])
				x+=4;
			else
				x+=7;
		}
		v.push_back(x);
		next_permutation(mark,mark+l);
	}
	sort(v.begin(),v.end());
	for (int i=0;i<v.size();++i)
		if (v[i]>=n){
			cout << v[i];
			return 0;
		}
	for (int i=0;i<l/2+1;++i)
		cout << 4;
	for (int i=0;i<l/2+1;++i)
		cout << 7;
}
