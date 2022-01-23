#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int i = 0;
  int j = 0;
  string sA = "A:";
  string sB = "B:";

  while(i < A){
    sA += "]";
    i++;
  }
  while(j < B){
    sB += "]";
    j++;
  }
  
  cout << sA << endl;
  cout << sB << endl;
}
