#include <stdio.h>
#define HELLO 100

int main() {
    #ifndef HI
        printf("HI is not defined. So, now we are going to define it here\n");
        #define HI 300
    #else
        printf("HI is already defined in the program\n");
    #endif
    return 0;
}
