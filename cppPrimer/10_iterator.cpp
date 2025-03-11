#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main () {
    std::vector<int>::iterator it;
    std::vector<int>::const_iterator it1;//只可读

    std::vector<string> v;
    v.reserve(10);//预留空间给vector，否则每次push_back迭代器可能失效,不预留此代码输出混乱
    v.push_back("hello");
    auto beg = v.begin(); // beg返回一个迭代器类型
    v.push_back("world");
    cout << *(beg+1) << endl; //解引用迭代器，可以获得迭代器所指对象

    cout << (*beg).length() << endl;
    cout << beg->length() << endl; // "->" 箭头运算符把解引用和成员访问两个操作结合起来了，(*beg).mem 和 beg->mem 是一样的

    vector<int> v1;
    for(int i = 0;i<100;i++) {
        v1.push_back(i);
    }
    auto start = v1.begin();
    auto end = v1.end();
    
    // auto mid = (start + end) / 2; //报错 求mid时要用下面的写法，因为start+end的索引已经超过了v1的索引最大范围end，所以报错

    auto mid = start + (end-start)/2;
    cout << *mid << endl;

    return 0;
}