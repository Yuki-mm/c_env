#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int  n;
    
    cout << "int : ";
    cin >> n;
    switch(n){
        case 0 : cout << "A";
                 cout << "B";   break;
        case 1 : cout << "C";   break;
        case 2 : cout << "D";   break;
        default: cout << "F";   break;
    }
    cout << "\n";
}