#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));

    int lucky = rand() % 10;
    cout << "your lucky num is " << lucky << "\n";
}