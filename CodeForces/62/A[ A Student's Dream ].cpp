#include <iostream>

using namespace std;

int main()
{
  int a, b, c, d;
  cin >> c >> d >> a >> b;
  if (d - 1 <= a && 2 * (d + 1) >= a )
  {
      cout << "YES" << endl;
      return 0;
  }
  if (c - 1 <= b && 2 * (c + 1) >= b)
  {
      cout << "YES" << endl;
      return 0;
  }
  cout << "NO" << endl;
  return 0;
}
