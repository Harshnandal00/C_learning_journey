#include <stdio.h>

int main() {
    /* ===============================
       DO-WHILE LOOP (RUNNABLE)
       =============================== */

    int i = 1;

    printf("Printing numbers from 1 to 5:\n");

    do {
        printf("%d\n", i);
        i++; // update condition variable
    } while (i <= 5);

    printf("Loop finished.\n");

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – DO-WHILE LOOP
===========================================

1. WHAT IS A LOOP?
------------------
- Used to execute a block of code multiple times
- Helps avoid repetition and reduces errors

2. WHAT IS A DO-WHILE LOOP?
------------------
- Exit-controlled loop
- Executes loop body **at least once**
- Condition is checked **after** the loop body

3. SYNTAX
------------------
do {
    // code to repeat
} while (condition);

4. HOW IT WORKS
------------------
- Execute loop body
- Check condition
- If TRUE → repeat
- If FALSE → stop

5. IMPORTANT RULES
------------------
- Loop variable must be initialized before the loop
- Loop condition should eventually become FALSE
- Update the loop variable inside the loop to avoid infinite loops

6. COMMON MISTAKES
------------------
- Forgetting to update the loop variable
- Using wrong condition logic
- Infinite loops if condition never becomes FALSE

7. REAL-LIFE EXAMPLE
------------------
- Asking user input until valid (at least one input attempt)
- Drinking water → keep sipping while thirsty (first sip always happens)

===========================================
END OF DO-WHILE LOOP NOTES
===========================================
*/
