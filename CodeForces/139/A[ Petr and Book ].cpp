#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1000 + 100;
int arr[MAXN];
int b[MAXN];

int main()
{ 
	int n = 7, m;
	cin >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int pt = 0;
	while (m > 0)
	{
		if (arr[pt] >= m)
		{
			cout << pt + 1 << endl;
			return 0;
		}
		else 
			m -= arr[pt];
		pt = (pt + 1) % 7;
	}
}
