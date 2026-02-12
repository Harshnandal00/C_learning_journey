#include <stdio.h>

union Test {
    int i;
    double d;
    char c;
};

int main() {

    /* ===============================
       UNION MEMORY CHECK
       =============================== */

    union Test t;

    printf("Size of union: %lu bytes\n", sizeof(t));
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of double: %lu\n", sizeof(double));
    printf("Size of char: %lu\n", sizeof(char));

    return 0;
}

/*
===========================================
UNION MEMORY CONCEPT
===========================================

1. MEMORY ALLOCATION
------------------
Union memory = size of largest data member

Example:
int = 4 bytes
double = 8 bytes
char = 1 byte

Union size = 8 bytes

2. WHY?
------------------
Because all members overlap in memory.

3. MEMORY LAYOUT
------------------
All members start at same address.

4. STRUCT VS UNION MEMORY
------------------
Struct → sum of all members
Union → largest member only

===========================================
END OF MEMORY NOTES
===========================================
*/
