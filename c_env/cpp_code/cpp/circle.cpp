#include <iostream>
using namespace std;

int main(){
    const double Pi = 3.1415;
    double r;

    cout << "radius:";
    cin >> r;

    cout << "circumference:" << 2 * Pi * r << "\n";
    cout << "circle area:" << Pi * r * r << "\n";

}