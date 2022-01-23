#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> A(4*N - 1);
  for (int i = 0; i < 4*N - 1; i++){
    cin >> A[i];
  }
  int sum = 0;
  for (int i = 0; i < 4*N - 1; i++){
    sum += A[i];
  }

  int ans = N*(N+1)*2 - sum;
  cout << ans << endl;
}