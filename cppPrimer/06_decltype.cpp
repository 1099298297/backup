#include <iostream>
using namespace std;

int main(){

    const int ci = 0,&cj = ci;

    decltype(ci) x = 0;
    decltype(cj) y =x;
    // decltype(cj) z;

    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b;
    // decltype(*p) c;

    decltype(i) e;

    // (i)会被视作一个表达式，而i是可以作为赋值语句的左值的特殊表达式，所以(i)的类型是int&,而引用类型必须赋值，所以报错
    // decltype((i)) d;

    return 0;
}