#include <iostream>

using namespace std;

const int MAXN = 100;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		arr[i] = s[i] - &#39;0&#39;;
	for (int i = 0; i < n; i++)
		if (arr[i] != 4 && arr[i] != 7)
		{
			cout << "NO" << endl;
			return 0;
		}
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n / 2; i++)
		sum1 += arr[i];
	for (int i = n / 2; i < n; i++)
		sum2 += arr[i];
	if (sum1 == sum2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
