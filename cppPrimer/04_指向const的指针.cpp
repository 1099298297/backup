#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int val = 42;int val2 = 40;
    // 顶层const： 指针本身是const  底层const: 所指对象是const
    // 顶层const 不可修改p
    int * const p = &val;
    val = 41;
    // p = &val2;
    cout << *p << endl;

    const double dval = 3.15;
    const double * const dp = &dval;
    cout << *dp << endl;

    // 底层const 允许修改q
    const int * q = &val; 
    q = &val2;
    cout << *q << endl;
    
    // 左边的const是底层const,右边的const是顶层const
    const int * const p3 = q;

    const int ci = 50;
    const int cj = 60;
    const int &r = ci;// 用于声明引用的const都是底层const
    // r = cj;

    return 0;
}