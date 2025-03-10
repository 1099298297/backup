#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string s("hello world!!!");
    decltype(s.size()) punct_cnt = 0;
    
    for (auto &c : s) {
        c = toupper(c);
        if(ispunct(c)){
            punct_cnt++;
        }
    }
    cout << punct_cnt << "\n" << s;

    return 0;
}