#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 20;
int arr[MAXN];
int tavan_2[MAXN];

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == &#39;4&#39;)
			arr[i] = 0;
		else
			arr[i] = 1;
	int n = s.size();
	int sum = 0;
	tavan_2[0] = 1;
	for (int i = 1; i <= n; i++)
		tavan_2[i] = tavan_2[i - 1] * 2;
	for (int i = 1; i < n; i++)
		sum += tavan_2[i];
	for (int i = 0; i < n; i++)
		sum += tavan_2[n - i - 1] * arr[i];
	cout << sum + 1 << endl;
}
