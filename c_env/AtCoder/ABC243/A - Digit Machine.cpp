#include <bits/stdc++.h>
using namespace std;


int main()
{
  
  int v;
  int a;
  int b;
  int c;
  char ans;

  cin >> v >> a >> b >> c;

  while (v >= 0){
    if (v >= a){
      v -= a;
    }
    else{
      ans = 'F';
      break;
    }
    if (v >= b){
      v -= b;
    }
    else{
      ans = 'M';
      break;
    }
    if (v >= c){
      v -= c;
    }
    else{
      ans = 'T';
      break;
    }
  }
  cout << ans << endl;
  
}