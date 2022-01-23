#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "integer: ";
    cin >> n;

    if (n > 0)
        cout << "posi \n";
    else if (n < 0)
        cout << "nega \n";
    else
        cout << "zero \n";
}