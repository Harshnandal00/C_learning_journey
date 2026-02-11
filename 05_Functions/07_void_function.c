#include <stdio.h>

void message();

int main() {
    /* ===============================
       VOID FUNCTION (RUNNABLE)
       =============================== */

    message();

    return 0;
}

void message() {
    printf("This function returns nothing.\n");
}

/*
===========================================
C LANGUAGE – VOID FUNCTION
===========================================

1. WHAT IS VOID FUNCTION?
------------------
- Function that does not return any value
- Performs only actions

2. WHY USE VOID?
------------------
- No result needed back
- For printing, displaying, simple tasks

3. SYNTAX
------------------
void function_name(parameters) {
    // statements
}

4. IMPORTANT POINTS
------------------
- Can be called like any function
- Control returns to main() after execution

5. REAL-LIFE EXAMPLE
------------------
- Like turning on a light switch

===========================================
END OF VOID FUNCTION NOTES
===========================================
*/
