#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 1000*1000 + 100;
int arr[MAXN];
int b[MAXN];
vector <int> myvec, myvec2, myvec3;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		myvec.push_back(arr[i]);
	for (int i = 0; i < n - 1; i++)
	{
		int num;
		cin >> num;
		myvec2.push_back(num);
	}
	bool h = 0;
	sort(myvec.begin(), myvec.end());
	sort(myvec2.begin(), myvec2.end());
	for (int i = 0; i < n - 1; i++)
		if (myvec[i] != myvec2[i])
		{
			h = 1;
			cout << myvec[i] << &#39; &#39;;
			break;
		}
	if (!h)
	{
		cout << myvec[n - 1] << &#39; &#39;;
	}
	h = 0;
	for (int i = 0; i < n - 2; i++)
	{
		int num;
		cin >> num;
		myvec3.push_back(num);
	}
	sort(myvec3.begin(), myvec3.end());
	for (int i = 0; i < n - 2; i++)
		if (myvec2[i] != myvec3[i])
		{
			h = 1;
			cout << myvec2[i] << endl;
			break;
		}
	// for (int i = 0; i < myvec2.size(); i++)
		// cerr << myvec2[i] << &#39; &#39;;
	// cerr << endl;
	// for (int i = 0; i < myvec3.size(); i++)
		// cerr << myvec3[i] << &#39; &#39;;
	// cerr << endl;
	if (!h)
	{
		cout << myvec2[n - 2] << endl;
	}
	return 0;
}
