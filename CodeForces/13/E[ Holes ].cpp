#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <cstdio>

using namespace std;

const int MAXN = 100*1000 + 100;
int mp[MAXN];
int arr[MAXN];
int s[MAXN], e[MAXN];
int d[MAXN];
int cnt[MAXN];

void run_big(int n)
{
	int num = 1;
	while (num * num < n)
		num++;
	for (int i = 0; i < n; i++)
		mp[i] = i / num;
	for (int i = 0; i < n; i++)
	{
		s[i] = num * i;
		e[i] = min(num * (i + 1) - 1, n - 1);
	}
	for (int i = 0; i < n + (num - 1) / num; i++)
		for (int j = e[i]; j >= s[i]; j--)
			if (j + arr[j] > e[i])
			{
				cnt[j] = 0;
				d[j] = j;
			}
			else 
			{
				cnt[j] = cnt[j + arr[j]] + 1;
				d[j] = d[j + arr[j]];
			}
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
	run_big(n);
	//for (int i = 0; i < n; i++)
	//	cerr << s[i] << &#39; &#39; << e[i] << endl;
	for (int i = 0; i < m; i++)	
	{
		int h;
		scanf("%d", &h);
		if (h == 0)
		{
			int num1, num2;
			scanf("%d %d", &num1, &num2);
			num1--;
			arr[num1] = num2;
			int ans = mp[num1];
			for (int i = num1; i >= s[ans]; i--)
				if (i + arr[i] > e[ans])
				{
					cnt[i] = 0;
					d[i] = i;
				}
				else 
				{
					cnt[i] = cnt[i + arr[i]] + 1;
					d[i] = d[i + arr[i]];
				}
		}
		else
		{
			int pt;
			scanf("%d", &pt);
			pt--;
			int cnt_javab = 0;
			while (pt < n)
			{
				cnt_javab += cnt[pt] + 1;
				pt = d[pt];
				if (pt + arr[pt] >= n)
				{
					printf("%d %d\n" , pt + 1, cnt_javab);
					pt = n;
				}
				else
					pt += arr[pt];
				//cerr << pt << endl;
			}
		}
	}
	return 0;
}
