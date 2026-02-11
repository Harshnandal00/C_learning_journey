#include <stdio.h>

int factorial(int n);

int main() {
    /* ===============================
       RECURSION (RUNNABLE)
       =============================== */

    int num = 5;
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

/*
===========================================
C LANGUAGE – RECURSION
===========================================

1. WHAT IS RECURSION?
------------------
- Function calling itself
- Must have base condition

2. WHY USE RECURSION?
------------------
- Simplifies complex problems
- Common in factorial, fibonacci, tree traversal

3. IMPORTANT POINTS
------------------
- Always define base case
- Avoid infinite recursion

4. REAL-LIFE EXAMPLE
------------------
- Russian dolls: one inside another

===========================================
END OF RECURSION NOTES
===========================================
*/
