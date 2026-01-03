#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE DATA TYPE EXAMPLES
       =============================== */

    // Integer type
    int age = 20;
    printf("Age (int): %d\n", age);

    // Floating point type
    float height = 5.9f;
    printf("Height (float): %.1f\n", height);

    // Double type
    double pi = 3.1415926535;
    printf("PI (double): %.10lf\n", pi);

    // Character type
    char grade = 'A';
    printf("Grade (char): %c\n", grade);

    // Void pointer (no data)
    void *ptr = NULL;
    printf("Void pointer value: %p\n", ptr);

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – DATA TYPES (BASICS)
===========================================

Data types define:
- What kind of data a variable can store
- How much memory it will use
- What operations can be performed on it

-------------------------------------------
1. int (Integer)
-------------------------------------------
- Used to store whole numbers
- Can be positive or negative
- No decimal values

Example:
int count = 10;

Common size:
- 4 bytes (depends on system/compiler)

-------------------------------------------
2. float (Floating Point)
-------------------------------------------
- Used to store decimal numbers
- Less precision than double
- Suffix 'f' is recommended

Example:
float price = 99.99f;

Common size:
- 4 bytes

-------------------------------------------
3. double
-------------------------------------------
- Used to store decimal numbers
- More precision than float

Example:
double distance = 12345.6789;

Common size:
- 8 bytes

-------------------------------------------
4. char (Character)
-------------------------------------------
- Used to store a single character
- Stored using single quotes (' ')

Example:
char letter = 'A';

Common size:
- 1 byte

-------------------------------------------
5. void
-------------------------------------------
- Represents no value
- Used with pointers and functions
- Cannot create a normal variable of type void

Example:
void *ptr;

-------------------------------------------
FORMAT SPECIFIERS (IMPORTANT)
-------------------------------------------
%d   → int
%f   → float
%lf  → double
%c   → char
%p   → pointer

-------------------------------------------
BEST PRACTICES
-------------------------------------------
✔ Use correct data type to save memory
✔ Use double for more precise calculations
✔ Always initialize variables
✔ Use meaningful variable names

===========================================
END OF DATA TYPES NOTES
===========================================
*/
