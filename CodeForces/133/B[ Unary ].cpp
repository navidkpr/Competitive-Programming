#include <iostream>
#include <queue>
#define int long long

using namespace std;

const int delta = 1000*1000 + 3;

int32_t main()
{
	string arr;
	cin >> arr;
	int num = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		num = (num * 16) % delta;
		int ans;
		if (arr[i] == &#39;>&#39;)
			ans = 8;
		if (arr[i] == &#39;<&#39;)
			ans = 9;
		if (arr[i] == &#39;+&#39;)
			ans = 10;
		if (arr[i] == &#39;-&#39;)
			ans = 11;
		if (arr[i] == &#39;.&#39;)
			ans = 12;
		if (arr[i] == &#39;,&#39;)
			ans = 13;
		if (arr[i] == &#39;[&#39;)
			ans = 14;
		if (arr[i] == &#39;]&#39;)
			ans = 15;
		num += ans;
	}
	cout << num << endl;
	return 0;
}
