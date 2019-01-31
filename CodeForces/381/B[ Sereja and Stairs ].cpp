#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];
bool mrk[MAXN];
vector <int> myvec;

int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	vector <int> myvec;
	myvec.push_back(arr[0]);
	mrk[0] = 1;
	for (int i = 1; i < n; i++)
		if (arr[i] != myvec[(int)myvec.size() - 1] && !mrk[i])
		{
			mrk[i] = 1;
			myvec.push_back(arr[i]);
		}
	for (int i = n - 2; i >= 0; i--)
		if (arr[i] != myvec[(int)myvec.size() - 1] && !mrk[i])
		{
			mrk[i] = 1;
			myvec.push_back(arr[i]);
		}
	cout << myvec.size() << endl;
	for (int i = 0; i < myvec.size(); i++)
		cout << myvec[i] << &#39; &#39;;
	cout << endl;
	return 0;
}	
