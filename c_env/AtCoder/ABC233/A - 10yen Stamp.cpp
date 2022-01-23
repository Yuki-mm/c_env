#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
 
int main()
{
  int X, Y;
  cin >> X >> Y;
  int a = 0;
  int m = Y - X;
  while (m > 0){
    m -= 10;
    a++;
  }

  cout << a << endl;
}