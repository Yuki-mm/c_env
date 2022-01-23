#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int f(int x){
  return x*x + 2 * x +3;
}

int main()
{
  int x, ans;
  cin >> x;
  ans = f(f(f(x) + x) + f(f(x)));

  cout << ans << endl;
}