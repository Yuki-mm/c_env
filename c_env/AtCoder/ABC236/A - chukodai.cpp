#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


int main()
{
  int a, b;
  string s;
  cin >> s;
  cin >> a >> b;

  char A = s[a-1];
  char B = s[b-1];
  s[a-1] = B;
  s[b-1] = A;
  
  cout << s << endl;
}