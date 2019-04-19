#include <iostream>

using namespace std;

int constValue() {
    int age = 26;
    const int *pt = &age;

    cout << "*pt: " << *pt << endl;
    // *pt += 1; invalid

    age = 13;

    cout << "*pt1: " << *pt << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    constValue();
    return 0;
}
