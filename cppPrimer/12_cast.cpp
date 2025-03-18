#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int i = 3,j = 5;
    //static_cast
    double slope = static_cast<double>(j) / i;
    cout << slope << endl;

    double d = 3.14;
    void * p = &d;//任何非常量对象的地址都可以存入void*
    double *dp = static_cast<double*>(p);
    cout << *dp << endl;

    //const_cast
    const char *pc = "u"; // 字符串字面值本质上是const char[]类型，储存在只读内存区域
    char *c = const_cast<char *>(pc); //虽然修改pc为char* 但是指向的内存不可以修改
    cout << c << endl;
    // *c = "r";//虽然去掉了const,但是指向内存不可以修改

    // 错误同上
    const int *val = &i;
    int * valp = const_cast<int *>(val);
    // valp = 1000;

    // const int * a = 127; // 错误 因为127是一个纯右值 没有地址
    const char * b = "a";// 正确 因为"a" 字符串字面值的类型是const char[]字符数组，存储在静态内存区域

    return 0;
}