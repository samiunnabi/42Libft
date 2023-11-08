
#include <stdio.h>

void modifyValue(int x) {
    x = x * 2;
    printf("Inside function: %d\n", x);
}

int main() {
    int num = 5;
    modifyValue(num);
    printf("Outside function: %d\n", num);
    return 0;
}

// When you pass a variable (num) by value to a function (modifyValue), you are passing the actual value of the variable
// The function receives a copy of the variable's value
// Any changes made to the parameter inside the function does not affect the original value outside

// Value of num inside the function: 10 modifyValue(5)
// Value of num outside the function: 5 int num = 5
