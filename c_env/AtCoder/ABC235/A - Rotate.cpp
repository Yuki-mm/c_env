#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


int main()
{
  int a, b, c;
  string s;
  cin >> s;

  a = s[0] - 48;
  b = s[1] - 48;
  c = s[2] - 48;
  int ans = (100 * a + b * 10 + c) + (100 * b + c * 10 + a) + (100 * c + a * 10 + b);

  cout << ans << endl;
}