#include <iostream>
using namespace std;

int  main(){
    extern int bufSize;
    extern const int bufSize_const;
    cout << bufSize << endl;
    cout << bufSize_const << endl;
    return 0;
}
