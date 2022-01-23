#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  long long A[N];
  A[0] = 2LL;
  A[1] = 1LL;
  for (int i = 2; i <= N; i++){
    A[i] = A[i-2] + A[i-1];
  }
  printf("%lld", A[N]);
}