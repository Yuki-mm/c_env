#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
 
int main()
{
  int L, R;
  string S;
  char c[];
  cin >> L >> R;
  cin >> S;
  
  char c[] = S;
  int m = L - R;
  if (m % 2 != 0){
    m += 1;
  }
  m /= 2;

  // for(int i = 0; i < m; i++){
  //   char x = S[L-1+i];
  //   char y = S[R-1-i];
  //   S[L-1] = y;
  //   S[R-1] = x;
  // }
  cout << c[L-1] << endl;
}