#include <iostream>

using namespace std;

const int MAXN = 1000;

int main()
{
	int n;
	cin >> n;
	int arr[3] = {0, 0, 0};
	for (int i = 0; i < n; i++)
	{
		int b[3];
		cin >> b[0] >> b[1] >> b[2];
		for (int j = 0; j < 3; j++)
			arr[j] += b[j];
	}
	for (int i = 0; i < 3; i++)
		if (arr[i] != 0)
		{
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
