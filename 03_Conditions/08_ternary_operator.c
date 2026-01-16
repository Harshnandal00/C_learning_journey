#include <stdio.h>

int main() {
    /* ===============================
       TERNARY OPERATOR (RUNNABLE)
       =============================== */

    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    (number % 2 == 0)
        ? printf("The number is EVEN.\n")
        : printf("The number is ODD.\n");

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – TERNARY OPERATOR
===========================================

1. WHAT IS THE TERNARY OPERATOR?
-------------------------------
- A compact replacement for simple if-else
- Also called conditional operator

2. SYNTAX
-------------------------------
condition ? expression_if_true : expression_if_false;

3. HOW IT WORKS
-------------------------------
- Condition is evaluated first
- If TRUE → first expression runs
- If FALSE → second expression runs

4. WHEN TO USE
-------------------------------
- Simple decisions
- Assigning values
- Printing simple results

5. WHEN NOT TO USE
-------------------------------
- Complex logic
- Multiple conditions
- Nested decisions (hurts readability)

6. COMMON MISTAKES
-------------------------------
- Overusing ternary operator
- Nesting ternary expressions
- Forgetting readability

===========================================
END OF TERNARY OPERATOR NOTES
===========================================
*/

