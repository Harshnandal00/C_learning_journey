#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {

    /* ===============================
       UNION BASICS (RUNNABLE)
       =============================== */

    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 5.5;
    printf("Float: %.2f\n", d.f);

    printf("Integer after float assignment: %d\n", d.i);

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – UNION BASICS
===========================================

1. WHAT IS A UNION?
------------------
- User-defined data type
- Similar to structure
- BUT all members share the SAME memory location

2. KEY DIFFERENCE FROM STRUCT
------------------
Structure → Separate memory for each member
Union → Same memory for all members

3. MEMORY BEHAVIOR
------------------
- Size of union = size of largest member
- Only ONE member holds valid value at a time

4. WHY VALUE CHANGES?
------------------
When you assign new value:
- It overwrites previous data
- Because memory is shared

5. WHEN TO USE?
------------------
- Memory optimization
- When only one value is needed at a time
- Embedded systems
- Hardware level programming

===========================================
END OF UNION BASICS NOTES
===========================================
*/
