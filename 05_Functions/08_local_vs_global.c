#include <stdio.h>

int global_var = 100;  // global variable

int main() {
    /* ===============================
       LOCAL VS GLOBAL VARIABLES (RUNNABLE)
       =============================== */

    int local_var = 50;  // local variable

    printf("Local variable = %d\n", local_var);
    printf("Global variable = %d\n", global_var);

    test();

    return 0;
}

void test() {
    printf("Accessing global variable in function = %d\n", global_var);
}

/*
===========================================
C LANGUAGE – LOCAL VS GLOBAL VARIABLES
===========================================

1. LOCAL VARIABLE
------------------
- Declared inside a function
- Scope limited to that function
- Destroyed when function ends

2. GLOBAL VARIABLE
------------------
- Declared outside all functions
- Accessible anywhere in program
- Exists throughout program execution

3. IMPORTANT POINTS
------------------
- Avoid using too many global variables
- Local variables can shadow global variables

4. REAL-LIFE EXAMPLE
------------------
- Local: tools on your desk (only accessible locally)
- Global: building utilities (accessible everywhere)

===========================================
END OF LOCAL VS GLOBAL NOTES
===========================================
*/
