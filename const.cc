#include <iostream>

int constValue() {
    int age = 26;
    const int *pt = &age;

    // *pt += 1; invalid
}

int main(int argc, char const *argv[])
{
    /* code */
    constValue();
    return 0;
}
