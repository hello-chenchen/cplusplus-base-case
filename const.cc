#include <iostream>

using namespace std;

void constValue() {
    int age = 26;
    const int *pt = &age;

    cout << "*pt: " << *pt << endl;
    // *pt += 1; NOTICE: invalid

    age = 13;

    cout << "*pt1: " << *pt << endl;
}

void constValue2ConstPoint() {
    const int age = 26;
    const int *pt = &age;

    cout << "*pt: " << *pt << endl;

    //NOTICE: invalid
    // int *age1 = pt;
    int *age1 = (int *)pt;
    // int *age1 = &age;
    cout << "age1: " << *age1 << endl;
}

void const2CommonValude() {
    const int age = 26;
    int ik = age;

    cout << "age: " << age << endl;
    cout << "ik: " << ik << endl;
    ik = 2;
    cout << "ik: " << ik << endl;
}

void doubleConstPoint() {
    const int **pp2;

    int *p1;

    const int n = 13;

    *pp2 = &n; //NOTICE: invalid

    *p1 = 10;

    cout << "**pp2: " << **pp2 << endl;
}

void constTransfer() {
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
    const2CommonValude();
    return 0;
}
