#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE CONSTANT EXAMPLES
       =============================== */

    // Using const keyword
    const int MAX_AGE = 100;
    printf("Max age (const): %d\n", MAX_AGE);

    // Using #define macro
    #define PI 3.14159
    printf("Value of PI (#define): %.5f\n", PI);

    // const with different data types
    const float GRAVITY = 9.8f;
    const char GRADE = 'A';

    printf("Gravity: %.1f\n", GRAVITY);
    printf("Grade: %c\n", GRADE);

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – CONSTANTS
===========================================

A constant is a value that:
- CANNOT be changed after definition
- Remains fixed throughout the program

-------------------------------------------
1. const KEYWORD
-------------------------------------------
- Used to create read-only variables
- Checked by the compiler
- Has a data type

Example:
const int x = 10;

❌ This is NOT allowed:
x = 20;

-------------------------------------------
2. #define (MACRO CONSTANT)
-------------------------------------------
- Preprocessor directive
- No data type
- Value is replaced before compilation

Example:
#define PI 3.14

❌ Cannot change later:
PI = 5.0;   // invalid

-------------------------------------------
3. DIFFERENCE: const vs #define
-------------------------------------------

const:
- Has a data type
- Uses memory
- Compiler checks type
- Preferred in modern C

#define:
- No data type
- No memory allocation
- Simple text replacement
- Used for fixed values/macros

-------------------------------------------
4. WHEN TO USE WHAT?
-------------------------------------------
✔ Use const when you want:
  - Type safety
  - Readable code
  - Debugging support

✔ Use #define when:
  - Defining fixed constants like PI
  - Writing macros (advanced)

-------------------------------------------
5. GOOD PRACTICES
-------------------------------------------
✔ Use CAPITAL LETTERS for constants
✔ Never hard-code important values
✔ Prefer const over #define when possible

-------------------------------------------
EXAMPLES OF CONSTANTS
-------------------------------------------
const int DAYS_IN_WEEK = 7;
#define MAX_USERS 100

===========================================
END OF CONSTANTS NOTES
===========================================
*/
