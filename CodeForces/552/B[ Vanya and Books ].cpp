#include <iostream>

using namespace std;

const int MAX = 13;
long long int arr[MAX];

int main()
{
	long long int n;
	cin >> n;
	long long int sum = 0;
	arr[1] = 9;
	for (int i = 2; i < MAX; i++)
		arr[i] = arr[i - 1] * 10;
	int pt = 1;
	while (n >= arr[pt])
	{
		n -= arr[pt];
		sum += arr[pt] * pt;
		pt++;
	}
	sum += n * pt;
	cout << sum << endl;
	return 0;
}
