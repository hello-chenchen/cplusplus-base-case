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

int doubleConstPoint() {
    const int **pp2;

    int *p1;

    const int n = 13;

    *pp2 = &n; //NOTICE: invalid

    *p1 = 10;

    cout << "**pp2: " << **pp2 << endl;
}

int constTransfer() {
    int age = 39;
    const int *pt = &age;

    cout << "pt: " << pt << endl;
    cout << "*pt: " << *pt << endl;

    int sage = 80;
    pt = &sage;
    // *pt = sage; NOTICE: invalid

    cout << "pt: " << pt << endl;
    cout << "*pt: " << *pt << endl;

    int* const pt1 = &age;

    // pt1 = &sage; NOTICE: invalid
    *pt1 = sage;

    cout << "pt: " << pt << endl;
    cout << "*pt: " << *pt << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    constTransfer();
    return 0;
}
