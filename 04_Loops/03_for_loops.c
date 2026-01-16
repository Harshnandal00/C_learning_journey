#include <stdio.h>

int main() {
    /* ===============================
       FOR LOOP (RUNNABLE)
       =============================== */

    printf("Printing numbers from 1 to 5:\n");

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    printf("Loop finished.\n");

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – FOR LOOP
===========================================

1. WHAT IS A LOOP?
------------------
- Used to repeat a block of code
- Helps avoid code duplication and reduces errors

2. WHAT IS A FOR LOOP?
------------------
- Entry-controlled loop
- Usually used when the number of iterations is known beforehand
- Combines initialization, condition, and update in a single line

3. SYNTAX
------------------
for (initialization; condition; update) {
    // code to repeat
}

4. HOW IT WORKS
------------------
- Initialization happens once at the start
- Condition is checked before each iteration
- Loop body executes if condition is TRUE
- Update statement executes after each iteration
- Repeats until condition becomes FALSE

5. IMPORTANT RULES
------------------
- Initialization is required (or already done before loop)
- Condition must eventually become FALSE
- Update statement usually modifies loop variable to avoid infinite loop

6. COMMON MISTAKES
------------------
- Forgetting to update loop variable
- Wrong condition logic
- Infinite loops if condition never becomes FALSE

7. REAL-LIFE EXAMPLE
------------------
- Printing numbers from 1 to 100
- Iterating through elements of an array

===========================================
END OF FOR LOOP NOTES
===========================================
*/
