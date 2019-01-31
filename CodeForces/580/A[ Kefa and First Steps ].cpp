#include <iostream>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN], d[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
			cin >> arr[i];
	d[0] = 1;
	for (int i = 1; i < n; i++)
		if (arr[i] >= arr[i - 1])
			d[i] = d[i - 1] + 1;
		else
			d[i] = 1;
	int max_d = 0;
	for (int i = 0; i < n; i++)
			max_d = max(max_d, d[i]);
	cout << max_d << endl;
}
