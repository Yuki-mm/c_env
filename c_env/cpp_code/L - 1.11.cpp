#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
 
  for (int i = 1; i <= N; i++){
    int t;
    string o;

    cin >> o >> t;

    if (o == "+"){
      A += t;
      
    }
    else if (o == "-"){
      A -= t;
      
    }
    else if (o == "*"){
      A *= t;
      
    }
    else if (o == "/" && t != 0){
      A /= t;
      
    }
    else {
      cout << "error" << endl;
      break;
    }
    cout << i << ":" <<  A << endl;
  }
}