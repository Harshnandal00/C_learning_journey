#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE sizeof OPERATOR EXAMPLES
       =============================== */

    int a;
    float b;
    double c;
    char d;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu bytes\n", sizeof(d));

    // sizeof with data types directly
    printf("Size of int type: %zu bytes\n", sizeof(int));
    printf("Size of float type: %zu bytes\n", sizeof(float));

    // sizeof with expressions
    printf("Size of expression (a + b): %zu bytes\n", sizeof(a + b));

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – sizeof OPERATOR
===========================================

sizeof is an operator that:
- Tells how much memory (in bytes) a data type or variable occupies
- Is evaluated at compile time (not runtime)

-------------------------------------------
1. WHY sizeof EXISTS
-------------------------------------------
- Different data types need different memory
- Memory size may vary by system/compiler
- sizeof helps write portable code

-------------------------------------------
2. sizeof WITH VARIABLES
-------------------------------------------
Syntax:
sizeof(variable)

Example:
int x;
sizeof(x);

-------------------------------------------
3. sizeof WITH DATA TYPES
-------------------------------------------
Syntax:
sizeof(type)

Example:
sizeof(int)
sizeof(float)

-------------------------------------------
4. sizeof WITH EXPRESSIONS
-------------------------------------------
- sizeof does NOT evaluate the expression
- It only checks the resulting data type

Example:
sizeof(a + b)

-------------------------------------------
5. COMMON DATA TYPE SIZES (TYPICAL)
-------------------------------------------
char    → 1 byte
int     → 4 bytes
float   → 4 bytes
double  → 8 bytes

⚠️ These may vary depending on system

-------------------------------------------
6. sizeof RETURN TYPE
-------------------------------------------
- sizeof returns a value of type size_t
- %zu is the correct format specifier for size_t

-------------------------------------------
BEST PRACTICES
-------------------------------------------
✔ Use sizeof instead of hard-coding sizes
✔ Useful for arrays, memory allocation, pointers
✔ Always trust sizeof over assumptions

===========================================
END OF sizeof OPERATOR NOTES
===========================================
*/
