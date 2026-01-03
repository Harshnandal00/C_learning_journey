#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE scanf BASICS EXAMPLES
       =============================== */

    int age;
    float height;
    char grade;
    char name[20];  // string (character array)

    // Reading integer
    printf("Enter your age: ");
    scanf("%d", &age);  // &age stores input in variable
    printf("You entered age: %d\n", age);

    // Reading float
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("You entered height: %f\n", height);

    // Reading character
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);  // note the space before %c
    printf("You entered grade: %c\n", grade);

    // Reading string
    printf("Enter your name: ");
    scanf("%s", name);  // no & needed for arrays
    printf("Hello, %s!\n", name);

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – scanf BASICS
===========================================

1. WHAT IS scanf?
-------------------
- scanf is used to **read input from the user**.
- It takes input and stores it in a variable.

2. FORMAT SPECIFIERS
-------------------
- %d → integer (int)
- %f → float
- %lf → double
- %c → character
- %s → string (text / char array)

3. USING &
-------------------
- For most variables (int, float, char), we use **&** to give scanf the **address** of the variable
- scanf then stores input directly at that memory location

Example:
int x;
scanf("%d", &x);  // &x gives the address

- Exception: strings (char arrays) do **not** need &  
  scanf("%s", name);

4. SPACE BEFORE %c
-------------------
- When reading characters after numbers or other inputs, use a space:
  scanf(" %c", &grade);
- This skips leftover newline characters in the buffer

5. TIPS
-------------------
- Always match format specifier with variable type
- Too many or too few specifiers will cause undefined behavior
- Strings stop reading at first whitespace
- Use fgets() for full-line strings (later topic)

===========================================
END OF scanf BASICS NOTES
===========================================
*/
