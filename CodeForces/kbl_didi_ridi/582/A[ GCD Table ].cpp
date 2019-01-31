#include <iostream>
#include <set>
#include <vector>

using namespace std;

const int MAXN = 500 + 10;
long long int arr[MAXN*MAXN];
vector <int> myvec;
multiset <int> st;

long long int gcd(long long int n, long long int m)
{
	if (n > m)
		swap(n, m);
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		cin >> arr[i]; st.insert(arr[i]);
	}
	int cnt = 0;
	while (cnt < n)
	{
		// cerr << cnt << endl;
		int num = *st.rbegin();
		myvec.push_back(num);
		for (int i = 0; i < myvec.size(); i++)
		{
			st.erase(st.find(gcd(myvec[i], num)));
			if (i != myvec.size() - 1)
				st.erase(st.find(gcd(myvec[i], num)));
		}
		// cerr << "CHECK" << endl;
		cnt++;
	}
	for (int i = 0; i < myvec.size(); i++)
		cout << myvec[i] << &#39; &#39;;
}
