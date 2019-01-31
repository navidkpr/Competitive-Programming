#include <iostream>

using namespace std;

int main(){
  int n; cin >> n;
  int up = 0, l = -1, r = -1;
  for (int i = 0; i < n; i++)
  {
  	char c;
  	cin >> c;
    if(c == &#39;L&#39;)
    {
      if(r != -1)
      	up += 1 - (i - r) % 2;
      r = -1;
      l = i;
    }
    if(c==&#39;R&#39;)
    {
      up += (l ==-1? i : i - l - 1);
      l = -1;
      r = i;
    }
  }
  if(r == -1)
  	up += (l == -1? n : n - l - 1);
  cout << up << endl;
}
