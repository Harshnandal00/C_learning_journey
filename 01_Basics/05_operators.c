#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE OPERATOR EXAMPLES
       =============================== */

    int a = 10;
    int b = 3;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // Assignment Operators
    int x = 5;
    x += 3;   // x = x + 3
    printf("After += : %d\n", x);

    // Relational Operators
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);

    // Logical Operators
    printf("AND (a > 5 && b < 5): %d\n", (a > 5 && b < 5));
    printf("OR  (a < 5 || b < 5): %d\n", (a < 5 || b < 5));
    printf("NOT !(a > b): %d\n", !(a > b));

    // Increment and Decrement
    int n = 10;
    n++;
    printf("After increment: %d\n", n);
    n--;
    printf("After decrement: %d\n", n);

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – OPERATORS
===========================================

Operators are symbols that:
- Perform operations on values or variables

-------------------------------------------
1. ARITHMETIC OPERATORS
-------------------------------------------
+   Addition
-   Subtraction
*   Multiplication
/   Division
%   Modulus (remainder)

Example:
10 % 3 → 1

-------------------------------------------
2. ASSIGNMENT OPERATORS
-------------------------------------------
=    Assign
+=   Add and assign
-=   Subtract and assign
*=   Multiply and assign
/=   Divide and assign

Example:
x += 2 → x = x + 2

-------------------------------------------
3. RELATIONAL OPERATORS
-------------------------------------------
==   Equal to
!=   Not equal to
>    Greater than
<    Less than
>=   Greater than or equal to
<=   Less than or equal to

Result:
- Always returns 1 (true) or 0 (false)

-------------------------------------------
4. LOGICAL OPERATORS
-------------------------------------------
&&   Logical AND
||   Logical OR
!    Logical NOT

Used to combine conditions

-------------------------------------------
5. INCREMENT / DECREMENT
-------------------------------------------
++   Increase value by 1
--   Decrease value by 1

Example:
x++ → x = x + 1

-------------------------------------------
BEST PRACTICES
-------------------------------------------
✔ Use parentheses for clarity
✔ Be careful with integer division
✔ Use meaningful variable names
✔ Avoid overly complex expressions

===========================================
END OF OPERATORS NOTES
===========================================
*/
