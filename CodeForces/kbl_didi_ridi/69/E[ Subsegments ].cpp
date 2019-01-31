#include <iostream>
#include <set>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];
set <int> once;
multiset <int> more;

int32_t main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < k; i++)
	{
		// cerr << once.size() << endl;
		if (once.find(arr[i]) != once.end())
		{
			once.erase(arr[i]);
			more.insert(arr[i]);
		}
		else if (more.find(arr[i]) == more.end())
		{
			once.insert(arr[i]);
		}
		else
			more.insert(arr[i]);
	}
	if (once.size() >= 1)
		cout << *once.rbegin() << endl;
	else
		cout << "Nothing" << endl;
	for (int i = k; i < n; i++)
	{
		if (once.find(arr[i]) != once.end())
		{
			once.erase(arr[i]);
			more.insert(arr[i]);
		}
		else if (more.find(arr[i]) == more.end())
			once.insert(arr[i]);
		else
			more.insert(arr[i]);

		if (once.find(arr[i - k]) != once.end())
			once.erase(arr[i - k]);
		else 
		{
			// cerr << more.count(arr[i - k]) << &#39; &#39; << arr[i - k] << endl;
			more.erase(more.find(arr[i - k]));
			// cerr << more.count(arr[i - k]) << &#39; &#39; << arr[i - k] << endl;
			if (more.count(arr[i - k]) == 0)
				once.insert(arr[i - k]);
		}

		if (once.size() >= 1)
			cout << *once.rbegin() << endl;
		else
			cout << "Nothing" << endl;
	}
	// cout << more.count(3) << endl;
}
