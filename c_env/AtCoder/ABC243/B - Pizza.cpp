#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N);
  set<int> a;

  for (int i = 0; i < N; i++){
    cin >> A[i];
    a.insert(A[i]);
  }
  for (int i = 0; i < N; i++){
    cin >> B[i];
    a.insert(B[i]);
  }

  int cnt = 0;
  for (int i = 0; i < N; i++){
    if(A[i] == B[i]){
      cnt++;
    }
  }
  int res = a.size();

  cout << cnt << endl;
  cout << res << endl;
}