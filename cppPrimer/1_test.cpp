#include <iostream>
using namespace std;

class Test{
    public:
    void hello(){
        cout << "hello" << endl;
    }
};
int main(){
    Test *p = nullptr;
    p->hello();
    return 0;
}