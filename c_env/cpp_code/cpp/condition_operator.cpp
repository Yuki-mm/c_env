#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int  a,b;
    cout << "int a:"; cin >> a;
    cout << "int b:"; cin >> b;

    if (a>b){
        int t = a;
        a = b;
        b = t;
    }
}