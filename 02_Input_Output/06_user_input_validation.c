#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE INPUT VALIDATION EXAMPLES
       =============================== */

    int age;
    float height;

    printf("Enter your age (integer): ");
    if (scanf("%d", &age) != 1) { // scanf returns number of successful inputs
        printf("Invalid input! Please enter an integer.\n");
        return 1; // exit program
    }

    printf("Enter your height in meters (float): ");
    if (scanf("%f", &height) != 1) {
        printf("Invalid input! Please enter a floating-point number.\n");
        return 1;
    }

    printf("\nYou entered:\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – USER INPUT VALIDATION
===========================================

1. WHY VALIDATE INPUT?
-------------------
- Users may type wrong data (letters instead of numbers)
- scanf will fail and store garbage
- Input validation prevents undefined behavior

2. HOW IT WORKS
-------------------
- scanf returns **number of successful inputs**
- Example:
  scanf("%d", &age) returns 1 if integer entered
  returns 0 if input is invalid

- You can check this value to detect errors

3. GOOD PRACTICE
-------------------
- Always check scanf return value when reading numbers
- For strings, fgets() is safer than scanf("%s", ...)
- Consider clearing input buffer if wrong input is entered

4. TIPS
-------------------
- For beginners, always test with valid input first
- Then try wrong inputs to see how scanf fails
- This prepares you for real-world programs

===========================================
END OF USER INPUT VALIDATION NOTES
===========================================
*/
