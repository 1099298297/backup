#include <cstdio>
#include <iostream>
using namespace std;

int main () {
    int *ptrs[10]; //ptrs是含有10个整型指针的数组
    // int &refs[10] = /* ? */ // 错误 不存在引用的数组

    int arr[10] = {0};
    //数组的指针和引用
    int (*Parray) [10] = &arr;  //Parray指向arr
    int (&arrRef) [10] = arr; //arrRef引用arr

    int *(&arry) [10] = ptrs;// arry是ptrs的引用，含有10个指针 


    string nums[] = {"one","two","three"};
    string *p = &nums[0];
    string *p2 = nums;
    cout << *p << " " << *p2 << endl;

    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    cout << ia << endl;
    // ia本身是一个地址
    auto ia2(ia); //ia2是一个整型指针 指向ia的第一个元素
    // ia2 = 42; // 错误：ia2是一个指针，不可以赋值
    *ia2 = 41;
    cout << ia[0] << endl;

    auto ia3(&ia[0]); // ia3的类型是int* 整型指针
    *ia3 = 42;
    cout << ia[0] << endl;

    decltype(ia) ia4 = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = ia4; //p指向ia4的第一个元素
    ++p;
    int *e = &ia4[10]; // e指向ia4尾元素的下一个地址，可以用于判断是否到尾部

    for(int *b = ia4;b!=e;++b) {
        cout << *b << " ";
    }
    return 0;
}