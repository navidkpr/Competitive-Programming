#include <iostream>

using namespace std;

const int INF = 1000*1000*1000;
const int MAXN = 1000;
int arr[MAXN];

int main()
{
	int n, c;
	cin >> n >> c;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int max_ex = -INF;
	for (int i = 1; i < n; i++)
		max_ex = max(max_ex, arr[i - 1] - arr[i] - c);
	cout << max(0, max_ex) << endl;
	return 0; 
}
