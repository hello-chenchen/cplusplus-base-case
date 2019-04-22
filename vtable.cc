#include <iostream>

using namespace std;

class A {
    public:
    virtual int foo() {
        return 1;
    }
};

class B :public A {
    public:
    int foo() {
        return 2;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    A* a = new B();
    int ret = a->foo();

    cout << "ret: " << ret << endl;
    return 0;
}
