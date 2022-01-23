#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int  y;
    cout << "year : ";
    cin >> y;
    
    cout << "This is ";
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
        cout << "leap year \n";
    }
    else{
        cout << "not leap year \n";
    }
}