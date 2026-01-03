#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE printf BASICS EXAMPLES
       =============================== */

    int age = 20;
    float height = 5.9f;
    char grade = 'A';

    // Basic printing
    printf("Age: %d\n", age);         // %d for integers
    printf("Height: %f\n", height);   // %f for float
    printf("Grade: %c\n", grade);     // %c for char

    // Multiple variables in one line
    printf("Age: %d, Height: %f, Grade: %c\n", age, height, grade);

    // Escape sequences
    printf("Hello\nWorld\n");         // \n → new line
    printf("Column1\tColumn2\n");     // \t → tab space

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – printf BASICS
===========================================

1. WHAT IS printf?
-------------------
- printf is a standard library function that prints text or variable values to the screen.
- It can print literals (like "Hello") or variables (like age).

2. FORMAT SPECIFIERS
-------------------
- %d → integer (int)
- %f → floating point number (float)
- %lf → double
- %c → character
- %s → string (text)

Syntax:
printf("Text %specifier", variable);

- Multiple variables: printf("x=%d, y=%f", x, y);

3. ESCAPE SEQUENCES
-------------------
- Special characters that control formatting
- Most common:
  \n → new line
  \t → tab space
  \\ → backslash
  \" → double quote

4. HOW IT WORKS
-------------------
- printf reads the format string
- For each %specifier, it takes the **corresponding variable** from the argument list
- Prints it in the specified format

5. TIPS
-------------------
- Always match number of %specifier with variables
- %f prints 6 decimal places by default
- Use \n to make output readable
- \t helps align columns

===========================================
END OF printf BASICS NOTES
===========================================
*/
