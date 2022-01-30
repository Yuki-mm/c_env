#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


int main()
{
  long double N;
  cin >> N;
  long double a = pow(2, 31);
  long double b = -a;

  // cout << a << endl;
  // cout << b << endl;
  // cout << N << endl;

  if (N >= b && N < a){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  
}