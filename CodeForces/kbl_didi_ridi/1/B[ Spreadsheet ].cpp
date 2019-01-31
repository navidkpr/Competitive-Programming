#include <iostream>
#include <fstream>
using namespace std;
#define MAX 100
int n, i;
char c[MAX];
int nr, nr2, nr3, nr4;

void af(int nr)
{
    if(nr)
    {
        af((nr - 1) / 26);
        cout << (char)(&#39;A&#39; + (nr - 1) % 26);
    }
}

int main()
{
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", c);
        nr = nr2 = nr3 = nr4 = 0;
        for(i = 0 ; isalpha(c[i]) ; i++)
        {
            nr = nr * 26 + c[i] - &#39;A&#39; + 1;
        }
        for(i ; isdigit(c[i]) ; i++)
        {
            nr2 = nr2 * 10 + c[i] - &#39;0&#39;;
        }
        if(c[i] == 0)
        {
            cout << "R" << nr2 << "C" << nr << "\n";
            continue;
        }
        for(i ; isalpha(c[i]) ; i++)
        {
            nr3 = nr3 * 26 + c[i] - &#39;A&#39; + 1;
        }
        for(i ; isdigit(c[i]) ; i++)
        {
            nr4 = nr4 * 10 + c[i] - &#39;0&#39;;
        }
        af(nr4);
        cout << nr2 << "\n";
    }
}
