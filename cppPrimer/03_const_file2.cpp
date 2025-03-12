#include <iostream>
using namespace std;
int bufSize = 512;
extern const int bufSize_const = 1024; // const定义的全局变量 所有都要加上extern(无论是定义还是声明)， 因为每个文件的const常量都是独立的，这时候需要在定义处加上extern，强制让这个const变量具有外部链接属性
