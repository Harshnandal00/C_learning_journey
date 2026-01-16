#include <stdio.h>

int main() {
    /* ===============================
       RELATIONAL OPERATORS (RUNNABLE)
       =============================== */

    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input! Please enter two integers.\n");
        return 1;
    }

    printf("\nResults of relational comparisons:\n");

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a >  b : %d\n", a > b);
    printf("a <  b : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – RELATIONAL OPERATORS
===========================================

1. WHAT ARE RELATIONAL OPERATORS?
--------------------------------
- Used to compare two values
- Result is either TRUE (1) or FALSE (0)

2. LIST OF RELATIONAL OPERATORS
--------------------------------
==   Equal to
!=   Not equal to
>    Greater than
<    Less than
>=   Greater than or equal to
<=   Less than or equal to

3. IMPORTANT RULE
--------------------------------
- Relational expressions return:
  - 1 → TRUE
  - 0 → FALSE

Example:
int x = 5;
x > 3   → 1
x == 10 → 0

4. COMMON MISTAKES
--------------------------------
- Using '=' instead of '==' in conditions
- Assuming TRUE is any value other than 1 (in C, any non-zero is true)
- Printing relational results without understanding 0/1 output

5. WHY THIS MATTERS
--------------------------------
- All `if`, `while`, and `for` conditions depend on these
- Logical operators (&&, ||) combine relational results

6. TRY THIS
--------------------------------
- Enter equal numbers
- Enter a > b and b > a
- Observe how outputs change

===========================================
END OF RELATIONAL OPERATORS NOTES
===========================================
*/
