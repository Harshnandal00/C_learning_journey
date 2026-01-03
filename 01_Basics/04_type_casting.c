#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE TYPE CASTING EXAMPLES
       =============================== */

    // IMPLICIT TYPE CASTING (AUTOMATIC)
    int a = 10;
    float b = a;      // int → float automatically

    printf("Implicit casting (int to float): %f\n", b);

    // EXPLICIT TYPE CASTING (MANUAL)
    float x = 9.8;
    int y = (int)x;   // float → int manually

    printf("Explicit casting (float to int): %d\n", y);

    // INTEGER DIVISION WITHOUT CASTING
    int p = 5;
    int q = 2;
    float result1 = p / q;   // both int → result is int

    printf("Without casting (5 / 2): %f\n", result1);

    // INTEGER DIVISION WITH CASTING
    float result2 = (float)p / q;

    printf("With casting (5 / 2): %f\n", result2);

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – TYPE CASTING
===========================================

Type casting means:
- Converting one data type into another

-------------------------------------------
1. IMPLICIT TYPE CASTING
-------------------------------------------
- Done automatically by the compiler
- Happens when converting smaller type → larger type
- No data loss

Example:
int a = 10;
float b = a;

-------------------------------------------
2. EXPLICIT TYPE CASTING
-------------------------------------------
- Done manually by the programmer
- Required when converting larger type → smaller type
- Data loss MAY occur

Syntax:
(type) value

Example:
float x = 9.8;
int y = (int)x;   // y becomes 9

-------------------------------------------
3. INTEGER DIVISION PROBLEM
-------------------------------------------
If BOTH operands are integers:
- Result will be an integer
- Decimal part is lost

Example:
5 / 2 → 2

-------------------------------------------
4. FIXING INTEGER DIVISION
-------------------------------------------
Convert at least ONE operand to float

Example:
(float)5 / 2 → 2.5

-------------------------------------------
5. DATA LOSS WARNING
-------------------------------------------
Casting float → int:
- Removes decimal part
- NO rounding (just cuts off)

Example:
(int)7.9 → 7
(int)3.1 → 3

-------------------------------------------
BEST PRACTICES
-------------------------------------------
✔ Use implicit casting when safe
✔ Use explicit casting when needed
✔ Be careful of data loss
✔ Cast intentionally, not randomly

===========================================
END OF TYPE CASTING NOTES
===========================================
*/