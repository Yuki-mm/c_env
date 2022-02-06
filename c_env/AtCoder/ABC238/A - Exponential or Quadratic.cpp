#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin >> n;
  long double a = pow(2, n);
  long double b = pow(n, 2);

  if (b < a){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  
}