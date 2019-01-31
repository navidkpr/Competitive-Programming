#include <iostream>
using namespace std;

const int MAXN = 100 + 10;
bool mrk[MAXN];

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(!mrk[a])
            mrk[a] = true;
        else
        {
            ans++;
            mrk[a] = false;
        }
    }
    cout << ans / 2 << endl;
}
