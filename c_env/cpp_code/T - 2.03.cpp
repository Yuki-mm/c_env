#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  char R[N][N] = {};
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      R[i][j] = '-';
    }
  }
  for(int i = 0; i < M; i++){
      int a = A[i];
      int b = B[i];
      R[a-1][b-1] = 'o';
      R[b-1][a-1] = 'x';
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cout << R[i][j];
      if (j == N-1) { 
        cout << endl; // 末尾なら改行
      }
      else {
        cout << " ";  
      }
    } 
  }
}
