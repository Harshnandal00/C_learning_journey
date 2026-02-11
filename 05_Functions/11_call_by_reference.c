#include <stdio.h>

void changeValue(int *x);

int main() {
    /* ===============================
       CALL BY REFERENCE (RUNNABLE)
       =============================== */

    int num = 10;
    changeValue(&num);
    printf("Value in main after function = %d\n", num);

    return 0;
}

void changeValue(int *x) {
    *x = 50;
    printf("Value inside function = %d\n", *x);
}

/*
===========================================
C LANGUAGE – CALL BY REFERENCE
===========================================

1. WHAT IS CALL BY REFERENCE?
------------------
- Address of variable passed to function
- Changes inside function affect original variable

2. SYNTAX
------------------
function_name(&variable);

Inside function: use pointer
*pointer = new_value;

3. IMPORTANT POINTS
------------------
- Allows modification of original variable
- Useful for large data to save memory

4. REAL-LIFE EXAMPLE
------------------
- Giving key to friend → they can open your house

===========================================
END OF CALL BY REFERENCE NOTES
===========================================
*/
