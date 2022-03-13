#include <bits/stdc++.h>
using namespace std;


int main()
{
  vector<int> a(10);
  for (int i = 0; i < 10; i++){
    cin >> a[i];
  }
  
  int num = a[0];
  int num2 = a[num];
  int ans = a[num2];

  cout << ans << endl;
  
}