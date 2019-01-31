#include <iostream>
#include <set>
#define mp(i, j) make_pair(i, j)

using namespace std;

const int MAXN = 100 + 10;
int arr[MAXN];
set < pair <int, int> > st;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	for (int i = 0; i < n; i++)
		st.insert(mp(arr[i], i));
	while ((*st.begin()).first != (*st.rbegin()).first)
	{
		pair <int, int> num1 = *st.rbegin();
		st.erase(num1);
		num1.first -= (*st.begin()).first;
		sum -= (*st.begin()).first;
		st.insert(num1);
	}
	cout << sum << endl;
	return 0;
}
