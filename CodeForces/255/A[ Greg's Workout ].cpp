#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];
int sum[3];
string s[3] = {"chest", "biceps", "back"};

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum[i % 3] += arr[i];
	}
	int max_index = 0, max_sum = sum[0];
	for (int i = 1; i < 3; i++)
		if (max_sum < sum[i])
		{
			max_sum = sum[i];
			max_index = i;
		}
	cout << s[max_index] << endl;
	return 0;
}
