#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];
int mrk[2];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		mrk[arr[i] % 2]++;
	bool h = 0;
	if (mrk[1] < 2)
		h = 1;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == h)
			cout << i + 1 << endl;
	return 0;
}
