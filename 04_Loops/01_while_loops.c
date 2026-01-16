#include <stdio.h>

int main() {
    /* ===============================
       WHILE LOOP (RUNNABLE)
       =============================== */

    int i = 1;

    printf("Printing numbers from 1 to 5:\n");

    while (i <= 5) {
        printf("%d\n", i);
        i++; // update condition variable
    }

    printf("Loop finished.\n");

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – WHILE LOOP
===========================================

1. WHAT IS A LOOP?
------------------
- Used to repeat a block of code
- Saves time and reduces code duplication

2. WHAT IS A WHILE LOOP?
------------------
- Entry-controlled loop
- Condition is checked BEFORE each iteration

3. SYNTAX
------------------
while (condition) {
    // code to repeat
}

4. HOW IT WORKS
------------------
- Condition checked
- If TRUE → loop body executes
- If FALSE → loop stops

5. IMPORTANT RULES
------------------
- Loop variable must be initialized
- Loop condition must eventually become FALSE
- Update statement is mandatory (or infinite loop)

6. COMMON MISTAKES
------------------
- Forgetting to update loop variable
- Wrong condition
- Infinite loops

7. REAL-LIFE EXAMPLE
------------------
- While fuel > 0 → keep driving
- While balance > 0 → keep spending

===========================================
END OF WHILE LOOP NOTES
===========================================
*/
