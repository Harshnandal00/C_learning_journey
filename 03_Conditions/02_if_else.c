#include <stdio.h>

int main() {
    /* ===============================
       IF-ELSE – BASICS (RUNNABLE)
       =============================== */

    int marks;

    printf("Enter marks (0-100): ");
    if (scanf("%d", &marks) != 1) { // validate input
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    if (marks >= 40) {
        printf("Result: You passed!\n");
    } else {
        printf("Result: You failed.\n");
    }

    printf("You entered: %d\n", marks);

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – IF-ELSE (BASICS)
===========================================

1. WHAT IS IF-ELSE?
-------------------
- `if` tests a condition.
- `else` runs when that condition is FALSE.
- Use when you have two mutually exclusive branches.

2. SYNTAX
-------------------
if (condition) {
    // runs when condition TRUE
} else {
    // runs when condition FALSE
}

3. NOTES ON CONDITIONS
-------------------
- Condition evaluates to non-zero = TRUE, zero = FALSE.
- Use relational operators: ==, !=, >, <, >=, <=.
- Combine conditions later with logical ops (&&, ||, !).

4. BEST PRACTICES
-------------------
- ALWAYS check `scanf` return for numeric input (prevents garbage).
- Always use `{}` even for single statements — keeps code safe and readable.
- Keep conditions simple and readable (extract complex checks to a boolean variable).

5. COMMON PITFALLS
-------------------
- Using `=` instead of `==` in conditions (assignment vs comparison).
- Forgetting to handle out-of-range inputs (e.g., marks < 0 or > 100).
- Relying on `scanf` without validating — leads to unexpected behavior.

6. QUICK EXAMPLES TO TRY
-------------------
- Try entering a non-integer (e.g., "abc") to see validation.
- Try boundary values: 39, 40, 100, -5.

===========================================
END OF IF-ELSE NOTES
===========================================
*/
