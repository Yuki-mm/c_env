#include <bits/stdc++.h>
using namespace std;


int main()
{
  string a = "a";
  string s;
  cin >> s;

  string S = a + s;
  int Slen = S.length() / 2;
  int slen = s.length() / 2;
  bool flg = true;

  for (int i = 0; i < slen; i++){
    int sym = slen + 1 - i;
    if (s[i] != s[sym]){
      flg = false;
    }
  }
  if (flg == true){
    cout << "Yes" << endl;
    return 0;
  }

  for (int i = 0; i < Slen; i++){
    int sym = Slen + 1 - i;
    if (S[i] != S[sym]){
      flg = false;
    }
  }
  if (flg == true){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}