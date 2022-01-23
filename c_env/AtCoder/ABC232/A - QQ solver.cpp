#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
 
int main()
{
  string s;
  cin >> s;
  int a = (int)s[0] - 48;
  int b = (int)s[2] - 48;

  cout << a * b << endl;
}