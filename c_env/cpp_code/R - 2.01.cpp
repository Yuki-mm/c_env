#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  int flg = 0;
  for (int i = 0; i < data.size()-1; i++){
    if (data[i] == data[i+1]){
      flg = 1;
    }
  }

  if (flg == 1){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}