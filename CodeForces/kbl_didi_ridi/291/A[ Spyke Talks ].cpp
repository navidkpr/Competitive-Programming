#include <iostream>
#include <set>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];
set <int> st, st2;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			continue;
		else if (st.find(arr[i]) != st.end())
		{
			st.erase(arr[i]);
			st2.insert(arr[i]);
		}
		else if (st2.find(arr[i]) != st2.end())
		{
			cout << -1 << endl;
			return 0;
		}
		else
			st.insert(arr[i]);
	cout << st2.size() << endl;
}
