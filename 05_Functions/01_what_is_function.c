#include <stdio.h>

int main() {
    /* ===============================
       FUNCTION BASICS (RUNNABLE)
       =============================== */

    printf("This is the main function.\n");
    greet();

    printf("Main function ends.\n");

    return 0;
}

void greet() {
    printf("Hello! This is a simple function.\n");
}

/*
===========================================
C LANGUAGE – WHAT IS A FUNCTION?
===========================================

1. WHAT IS A FUNCTION?
------------------
- Block of code performing a specific task
- Can be reused multiple times
- Executes only when called

2. WHY USE FUNCTIONS?
------------------
- Avoid repetition
- Easier to read and debug code
- Helps organize large programs

3. BASIC STRUCTURE
------------------
return_type function_name() {
    // statements
}

4. IMPORTANT POINTS
------------------
- Every C program must have a main()
- Functions are executed only when called
- Helps in modular programming

5. REAL-LIFE EXAMPLE
------------------
- Like a TV remote button: press → action happens

===========================================
END OF FUNCTION BASICS NOTES
===========================================
*/
