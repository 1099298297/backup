#include <iostream>

using namespace std;

int main(){
    int val = 42;
    int * p = &val;
    int *& r = p;

    *r = 41;
    cout << val << endl;

    return 0;
}