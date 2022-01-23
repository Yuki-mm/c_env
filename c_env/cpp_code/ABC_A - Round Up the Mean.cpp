// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   double a, b;
//   cin >> a >> b;
//   int ans = ceil((a + b)/2);
//   cout << ans << endl;
// }


#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int s,a,b,c;
  cin >> s;
  a = s / 100;
  b = (s / 10) % 10;
  c = s % 10;
  int ans = a + b + c;
  cout << ans << endl;
}