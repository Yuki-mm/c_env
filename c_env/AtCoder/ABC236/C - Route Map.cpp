#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<string> s(N), t(M);
  for (string& x : s){
    cin >> x;
  }
  for (string& x : t){
    cin >> x;
  }
  set <string> rapid(t.begin(), t.end());
  for (const string& x : s){
    cout << (rapid.count(x) ? "Yes" : "No") << '\n';
  }

}