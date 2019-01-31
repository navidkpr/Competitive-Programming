#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int last_hash = -1;
    int cnt_1 = 0, cnt_2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == &#39;#&#39;)
        {
            last_hash = i;
            cnt_2++;
        }
        else if (s[i] == &#39;(&#39;)
            cnt_1++;
        else
            cnt_2++;
        if (cnt_1 < cnt_2)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    if (last_hash == -1 && cnt_1 != cnt_2)
    {
        cout << -1 << endl;
        return 0;
    }
    // cerr << last_hash << endl;
    // cerr << cnt_1 << &#39; &#39; << cnt_2 << endl;
    int cnt1 = 0, cnt2 = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == &#39;#&#39;)
            break;
        else if (s[i] == &#39;)&#39;)
            cnt2++;
        else
            cnt1++;
        if (cnt1 > cnt2)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i == last_hash)
        {
            cout << cnt_1 - cnt_2 + 1 << endl;
        }
        else if (s[i] == &#39;#&#39;)
            cout << 1 << &#39; &#39;;
    }
    return 0;
}
