#include <iostream>

using namespace std;

int constValue() {
    int age = 26;
    const int *pt = &age;

    cout << "*pt: " << *pt << endl;
    // *pt += 1; NOTICE: invalid

    age = 13;

    cout << "*pt1: " << *pt << endl;
}

int constValue2ConstPoint() {
    const int age = 26;
    const int *pt = &age;

    cout << "*pt: " << *pt << endl;

    //NOTICE: invalid
    // int *age1 = pt;
    // int *age1 = &age;
    // cout << "age1: " << age1 << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    constValue2ConstPoint();
    return 0;
}
