#include <iostream>

using namespace std;

const int MAXN = 1000*1000 + 1000;
int arr[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	int r = MAXN - 1, l = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == &#39;l&#39;)
			arr[r--] = i + 1;
		else
			arr[l++] = i + 1;
	for (int i = 0; i < l; i++)
		cout << arr[i] << &#39;\n&#39;;
	for (int i = r + 1; i < MAXN; i++)
		cout << arr[i] << &#39;\n&#39;;
}
