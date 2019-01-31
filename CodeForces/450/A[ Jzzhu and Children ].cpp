#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[i] = (num + m - 1) / m;
	}
	int max1 = 0, max_index = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= max1)
		{
			max1 = arr[i];
			max_index = i;
		}
	}
	cout << max_index + 1 << endl;
}
