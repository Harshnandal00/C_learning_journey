#include <stdio.h>

void greet();

int main() {
    /* ===============================
       FUNCTION CALL (RUNNABLE)
       =============================== */

    greet();  // call function
    greet();  // call again

    return 0;
}

void greet() {
    printf("Hello! Function called.\n");
}

/*
===========================================
C LANGUAGE – FUNCTION CALL
===========================================

1. WHAT IS FUNCTION CALL?
------------------
- Executing a function from main() or other function
- Transfers control to the function

2. TYPES OF FUNCTION CALL
------------------
- Direct: from main()
- Nested: function calling another function

3. SYNTAX
------------------
function_name(parameters);

4. IMPORTANT POINTS
------------------
- Function must be declared/defined before call
- Control returns to calling function after execution

5. REAL-LIFE EXAMPLE
------------------
- Pressing a button to run a machine

===========================================
END OF FUNCTION CALL NOTES
===========================================
*/
