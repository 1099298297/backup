#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int ival = 42;
    int *p = &ival;
    int *q = p;
    cout << p << endl;
    cout << *q << endl;
    return 0;
}