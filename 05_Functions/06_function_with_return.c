#include <stdio.h>

int add(int a, int b);

int main() {
    /* ===============================
       FUNCTION WITH RETURN (RUNNABLE)
       =============================== */

    int result = add(10, 20);
    printf("Returned sum = %d\n", result);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

/*
===========================================
C LANGUAGE – FUNCTION WITH RETURN
===========================================

1. WHAT IS RETURN VALUE?
------------------
- Value sent back to the calling function
- Function can return int, float, char, etc.

2. WHY USE RETURN VALUE?
------------------
- To get result from function
- Useful for calculations

3. SYNTAX
------------------
return expression;

Example:
int add(int a, int b) { return a + b; }

4. IMPORTANT POINTS
------------------
- Return ends function execution
- Void functions don’t return a value

5. REAL-LIFE EXAMPLE
------------------
- Sending report back after completing a task

===========================================
END OF FUNCTION WITH RETURN NOTES
===========================================
*/
