#include <stdio.h>

// Function declarations
void function1(void) __attribute__((constructor));
void function2(void) __attribute__((destructor));

void function1() {
    printf("\nNow we are in function1");
}

void function2() {
    printf("\nFunction2 is called just before the end of the program");
}

int main() {
    printf("\nNow we are in the main function");
    return 0;
}
