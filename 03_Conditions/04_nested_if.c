#include <stdio.h>

int main() {
    /* ===============================
       NESTED IF STATEMENT (RUNNABLE)
       =============================== */

    int age;
    char has_id;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input! Please enter a valid age.\n");
        return 1;
    }

    printf("Do you have a valid ID? (y/n): ");
    scanf(" %c", &has_id); // space before %c to consume newline

    if (age >= 18) {
        if (has_id == 'y' || has_id == 'Y') {
            printf("You are allowed to enter.\n");
        } else {
            printf("ID required for entry.\n");
        }
    } else {
        printf("You are underage. Entry not allowed.\n");
    }

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – NESTED IF STATEMENTS
===========================================

1. WHAT IS NESTED IF?
-------------------
- An `if` statement inside another `if`
- Used when one decision depends on another

2. SYNTAX
-------------------
if (condition1) {
    if (condition2) {
        // code
    } else {
        // code
    }
} else {
    // code
}

3. WHY USE NESTED IF?
-------------------
- Real-world rules are often hierarchical
- Example:
  - If age >= 18
      - If has ID → allow
      - Else → deny
  - Else → deny

4. IMPORTANT DETAIL (%c INPUT)
-------------------
- `scanf("%c", &var)` reads the next character INCLUDING newline
- Use `" %c"` (leading space) to skip whitespace

5. READABILITY TIPS
-------------------
- Avoid too deep nesting (hard to read)
- Consider logical operators or early returns
- Proper indentation is CRITICAL

6. COMMON MISTAKES
-------------------
- Forgetting space before %c
- Confusing nested if with if-else-if ladder
- Poor indentation leading to logic errors

===========================================
END OF NESTED IF NOTES
===========================================
*/
