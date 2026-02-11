#include <stdio.h>

void greet();  // declaration

int main() {
    /* ===============================
       FUNCTION DEFINITION (RUNNABLE)
       =============================== */

    greet();

    return 0;
}

void greet() {
    printf("Hello! This function is now defined.\n");
}

/*
===========================================
C LANGUAGE – FUNCTION DEFINITION
===========================================

1. WHAT IS FUNCTION DEFINITION?
------------------
- The actual body of the function
- Contains statements to perform the task

2. SYNTAX
------------------
return_type function_name(parameters) {
    // statements
}

3. IMPORTANT POINTS
------------------
- Must match declaration (if declared)
- Function is executed when called
- Can be called from main() or another function

4. REAL-LIFE EXAMPLE
------------------
- Like completing a task after saying you will do it

===========================================
END OF FUNCTION DEFINITION NOTES
===========================================
*/
