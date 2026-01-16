#include <stdio.h>

int main() {
    /* ===============================
       IF STATEMENT – BASICS (RUNNABLE)
       =============================== */

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }

    printf("Program ended.\n");

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – IF STATEMENT (BASICS)
===========================================

1. WHAT IS AN IF STATEMENT?
-------------------------
- Used to make decisions in a program
- Executes code ONLY if a condition is true

2. SYNTAX
-------------------------
if (condition) {
    // code runs if condition is true
}

3. CONDITION RULES
-------------------------
- Condition must evaluate to TRUE (non-zero)
- FALSE is represented by 0

Examples:
- age >= 18
- marks > 40
- x == y

4. IMPORTANT NOTES
-------------------------
- Curly braces {} are optional for single statement
- Recommended to ALWAYS use {} for readability
- If condition is false, block is skipped

5. REAL-LIFE EXAMPLE
-------------------------
- If it is raining → take umbrella
- If balance is low → show warning

===========================================
END OF IF STATEMENT NOTES
===========================================
*/
