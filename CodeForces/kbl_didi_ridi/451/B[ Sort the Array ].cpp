#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100*1000 + 100;
int arr[MAXN];
int b[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		b[i] = arr[i];
	sort(b, b + n);
	int s = n - 1, e = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != b[i])
		{
			s = i - 1;
			break;
		}
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] != b[i])
		{
			e = i + 1;
			break;
		}
	}
	//cerr << s << &#39; &#39; << e << endl;
	if (s == n - 1)
	{
		cout << "yes" << endl;
		cout << "1 1" << endl;
		return 0;
	}
	reverse(arr + s + 1, arr + e);
	for (int i = s + 1; i < e; i++)
		if (arr[i] != b[i])
		{
			cout << "no" << endl;
			return 0;
		}
	cout << "yes" << endl;
	cout << s + 2 << &#39; &#39; << e << endl;
}
