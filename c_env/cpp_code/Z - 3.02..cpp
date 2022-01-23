#include <bits/stdc++.h>
using namespace std;

int main() {
  using tii = tuple<int, int>;
  vector<tii> A;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    A.push_back(make_tuple(a, b));
  }
  sort(A.begin(), A.end());
  for (tii t : A) {
    int x, y;
    tie(x, y) = t;
    cout << x << " " << y << endl;
  }
}
