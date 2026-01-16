#include <stdio.h>

int main() {
    /* ===============================
       BREAK & CONTINUE (RUNNABLE)
       =============================== */

    printf("Numbers from 1 to 10, skipping 5 and stopping at 8:\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // skip this iteration
        }
        if (i == 8) {
            break;     // exit the loop
        }
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
C LANGUAGE – BREAK & CONTINUE
===========================================

1. WHAT ARE LOOP CONTROL STATEMENTS?
------------------
- Special statements to control loop execution
- Change normal flow without ending the program
- Includes: break, continue, and return (in functions)

2. WHAT IS BREAK?
------------------
- Exits the **entire loop immediately**
- Used when a certain condition is met

3. WHAT IS CONTINUE?
------------------
- Skips the **current iteration**
- Moves control to next iteration
- Loop doesn’t terminate

4. SYNTAX
------------------
break;      // exit the loop immediately
continue;   // skip remaining statements in this iteration

5. HOW IT WORKS
------------------
- Loop starts
- Check condition
- If continue → skip rest of loop body, go to next iteration
- If break → exit loop completely
- Otherwise → execute loop body normally

6. IMPORTANT RULES
------------------
- Only affects the **nearest enclosing loop**
- Avoid infinite loops by updating loop variables
- Can be used in while, do-while, and for loops

7. REAL-LIFE EXAMPLE
------------------
- Break: Stop reading a file when end marker found
- Continue: Skip processing invalid data, continue with next item

===========================================
END OF BREAK & CONTINUE NOTES
===========================================
*/
