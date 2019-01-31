#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];
bool mrk[MAXN];
bool mark[MAXN];
vector <int> myvec;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		if (!mrk[arr[i]] && arr[i] <= n && arr[i] >= 1)
		{
			mrk[arr[i]] = 1;
			mark[i] = 1;
		}
	int pt = 0;
	for (int i = 1; i <= n; i++)
		if (!mrk[i])
			myvec.push_back(i);
	for (int i = 0; i < n; i++)
		if (mark[i] == 1)
			cout << arr[i] << &#39; &#39;;
		else
		{
			cout << myvec[pt] << &#39; &#39;;
			pt++;
		}
}
