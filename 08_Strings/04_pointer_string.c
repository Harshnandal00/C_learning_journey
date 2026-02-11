#include <stdio.h>

int main() {
    /* ===============================
       STRING USING POINTER (RUNNABLE)
       =============================== */

    char *str = "Hello Pointer";
    printf("%s\n", str);

    return 0;
}

/*
===========================================
C LANGUAGE – STRING USING POINTER
===========================================

1. STRING AS POINTER
------------------
- String literal stored in read-only memory
- Pointer points to first character
- Cannot modify string literal

2. SYNTAX
------------------
char *ptr = "text";

3. IMPORTANT POINTS
------------------
- Efficient memory usage
- Useful for passing strings to functions

4. REAL-LIFE EXAMPLE
------------------
- Passing string literals to printf or other functions

===========================================
END OF STRING USING POINTER NOTES
===========================================
*/
