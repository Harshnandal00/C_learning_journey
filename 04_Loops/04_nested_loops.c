#include <stdio.h>

int main() {
    /* ===============================
       NESTED LOOPS (RUNNABLE)
       =============================== */

    int rows = 5;

    printf("Printing a 5x5 multiplication table:\n");

    for (int i = 1; i <= rows; i++) {         // outer loop
        for (int j = 1; j <= rows; j++) {     // inner loop
            printf("%d\t", i * j);
        }
        printf("\n"); // new line after each row
    }

    printf("Nested loop finished.\n");

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – NESTED LOOPS
===========================================

1. WHAT IS A LOOP?
------------------
- Used to repeat a block of code
- Nested loops are loops **inside another loop**
- Useful for multi-dimensional data

2. WHAT IS A NESTED LOOP?
------------------
- A loop placed inside another loop (outer and inner)
- Inner loop completes all its iterations for each iteration of outer loop
- Can be nested multiple levels

3. SYNTAX
------------------
for (initialization; condition; update) {   // outer loop
    for (initialization; condition; update) { // inner loop
        // code to repeat
    }
}

4. HOW IT WORKS
------------------
- Outer loop executes once
- Inner loop executes completely
- Outer loop moves to next iteration
- Inner loop repeats again
- Continues until outer loop condition is FALSE

5. IMPORTANT RULES
------------------
- Keep track of loop variables (different names for inner and outer)
- Avoid infinite loops
- Ensure proper indentation for readability

6. COMMON MISTAKES
------------------
- Using the same variable for both loops
- Forgetting to update inner loop variable
- Confusing loop limits

7. REAL-LIFE EXAMPLE
------------------
- Printing patterns (triangles, squares)
- Working with 2D arrays or matrices
- Multiplication tables

===========================================
END OF NESTED LOOP NOTES
===========================================
*/
