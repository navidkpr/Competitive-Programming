#include <iostream>

using namespace std;

const int MAXN = 100*1000 + 1000;
char c[2 * MAXN];
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < 2 * (n - 1); i++)
		cin >> c[i];
	int cnt = 0;
	for (int i = 0; i < 2 * (n - 1); i++)
	{
		int andis = i % 2;	
		if (andis == 0)
			arr[c[i] - &#39;a&#39;]++;
		else 
		{
			arr[c[i] - &#39;A&#39;]--;
			if (arr[c[i] - &#39;A&#39;] < 0)
			{
				arr[c[i] - &#39;A&#39;]++;
				cnt++;
			}
		}
	}
	//for (int i = 0; i < 50; i++)
	//	cerr << arr[i] << &#39; &#39;;
	//cerr << endl;
	cout << cnt << endl;
	return 0;
}
