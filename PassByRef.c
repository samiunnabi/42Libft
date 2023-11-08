
#include <stdio.h>

void modifyValue(int *x) {
    *x = *x * 2;
    printf("Inside function: %d\n", *x);
}

int main() {
    int num = 5;
    modifyValue(&num); // Pass the address of num
    printf("Outside function: %d\n", num);
    return 0;
}

// When you pass a variable by reference to a function, you are actually passing a pointer to the variable. (Pointer: pointing to num but value is mem address of num)
// So the function receives the variables memory address
// So it can directly modify the content of the variable outside the function

// Inside function: 10 modifyValue(&5)
// Outside function: 10 int num
