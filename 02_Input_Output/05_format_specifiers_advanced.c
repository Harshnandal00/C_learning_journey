#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE FORMAT SPECIFIERS EXAMPLES
       =============================== */

    int age = 25;
    float height = 5.9234f;
    double weight = 70.56789;
    char grade = 'A';
    char name[] = "Harsh";

    // Basic format specifiers
    printf("Integer: %d\n", age);
    printf("Float: %f\n", height);      // default 6 decimal places
    printf("Double: %lf\n", weight);    // default 6 decimal places
    printf("Character: %c\n", grade);
    printf("String: %s\n", name);

    // Precision for float/double
    printf("Height with 2 decimals: %.2f\n", height);
    printf("Weight with 3 decimals: %.3lf\n", weight);

    // Width formatting for alignment
    printf("%-10s%-10s%-10s\n", "Name", "Age", "Grade");  // header
    printf("%-10s%-10d%-10c\n", name, age, grade);       // row

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – FORMAT SPECIFIERS ADVANCED
===========================================

1. COMMON FORMAT SPECIFIERS
-------------------
- %d → integer
- %f → float
- %lf → double
- %c → character
- %s → string (char array)

2. FLOAT / DOUBLE PRECISION
-------------------
- %.nf → print n decimal places
- Example: %.2f prints 5.92
- Useful for tables, financial calculations, etc.

3. WIDTH FORMATTING
-------------------
- %mX → width of m characters, X = type (d,f,s,c)
- - → left-align, default = right-align
- Example:
  %-10s → left-align string in 10 spaces
  %10d → right-align integer in 10 spaces

4. COMBINING WIDTH & PRECISION
-------------------
- Example: %10.2f → right-align float with 2 decimals in 10-character width
- Example: %-10.3lf → left-align double with 3 decimals in 10-character width

5. TIPS
-------------------
- Always match format specifier with variable type
- Use width formatting for tables/columns
- Precision controls decimal places for float/double
- Left-align (-) improves readability in headers

===========================================
END OF FORMAT SPECIFIERS NOTES
===========================================
*/
