#include <stdio.h>

void add(int a, int b);

int main() {
    /* ===============================
       FUNCTION WITH PARAMETERS (RUNNABLE)
       =============================== */

    add(5, 10);
    add(20, 30);

    return 0;
}

void add(int a, int b) {
    printf("Sum = %d\n", a + b);
}

/*
===========================================
C LANGUAGE – FUNCTION WITH PARAMETERS
===========================================

1. WHAT ARE PARAMETERS?
------------------
- Values passed to function when called
- Also called arguments

2. WHY USE PARAMETERS?
------------------
- Makes function flexible
- Avoids hardcoding values
- Reusable with different inputs

3. SYNTAX
------------------
return_type function_name(data_type parameter1, ...)

4. IMPORTANT POINTS
------------------
- Data types must match
- Order of arguments matters
- Functions can have multiple parameters

5. REAL-LIFE EXAMPLE
------------------
- Like entering numbers in a calculator before operation

===========================================
END OF FUNCTION WITH PARAMETERS NOTES
===========================================
*/
