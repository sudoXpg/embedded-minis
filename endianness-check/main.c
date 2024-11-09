#include <stdio.h>

int main() {
    unsigned int x = 0x0123;
    // Use a char pointer to point to the lowest byte of the integer
    // char ptr = integer pointer casted to char pointer which will only take MSB
    char *c = (char*)&x;

    if (*c == 0x23) {
        printf("Little-endian\n");
    } else {
        printf("Big-endian\n");
    }

    return 0;
}