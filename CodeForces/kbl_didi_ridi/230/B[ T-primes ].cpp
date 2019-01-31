#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXN = 100*1000 + 1000;
long long int arr[MAXN];
bool mrk[MAXN * 10];
set <long long int> myset;
vector <long long int> prime;

void run_gharbal(int n)
{
	fill(mrk, mrk + n + 1, 1);
	mrk[0] = mrk[1] = 0;
	for (int i = 2; i <= n; i++)
		if (mrk[i])
		{
			for (int j = 2 * i; j <= n; j += i)
				mrk[j] = 0;
			prime.push_back(i);
		}
}

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int m = 1000*1000;
	run_gharbal(m);
	for (int i = 0; i < prime.size(); i++)
		myset.insert(prime[i] * prime[i]);
	for (int i = 0; i < n; i++)
		if (myset.find(arr[i]) != myset.end())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	return 0;
}
