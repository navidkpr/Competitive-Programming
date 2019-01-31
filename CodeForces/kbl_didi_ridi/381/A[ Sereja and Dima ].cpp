#include <iostream>

using namespace std;

const int MAXN = 1000 + 100;
int arr[MAXN];
int sum[2];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int pt_s = 0;
	int pt_e = n - 1;
	for (int i = 0; i < n; i++)
		if (arr[pt_s] > arr[pt_e])
		{
			sum[i % 2] += arr[pt_s];
			pt_s++;
		}
		else 
		{
			sum[i % 2] += arr[pt_e];
			pt_e--;	
		}
	cout << sum[0] << &#39; &#39; << sum[1] << endl;
	return 0;
}
