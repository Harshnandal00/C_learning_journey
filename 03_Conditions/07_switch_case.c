#include <stdio.h>

int main() {
    /* ===============================
       SWITCH-CASE STATEMENT (RUNNABLE)
       =============================== */

    int choice;

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("\nEnter your choice (1-4): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("You selected: Add\n");
            break;

        case 2:
            printf("You selected: Subtract\n");
            break;

        case 3:
            printf("You selected: Multiply\n");
            break;

        case 4:
            printf("You selected: Divide\n");
            break;

        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – SWITCH-CASE STATEMENT
===========================================

1. WHAT IS SWITCH-CASE?
----------------------
- Used to select ONE option from MANY
- Cleaner alternative to long if-else-if ladders
- Works with constant integer or character values

2. SYNTAX
----------------------
switch (expression) {
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // runs if no case matches
}

3. IMPORTANT RULES
----------------------
- `expression` must be:
  - int
  - char
  - enum
- You CANNOT use ranges or conditions (>, <, etc.)
- Each `case` must end with `break`

4. WHY BREAK IS IMPORTANT
----------------------
- Prevents FALL-THROUGH
- Without `break`, execution continues to next case

5. DEFAULT CASE
----------------------
- Optional but HIGHLY recommended
- Handles unexpected values safely

6. WHEN TO USE SWITCH
----------------------
- Menu-driven programs
- Fixed choices (days, months, options)
- Cleaner than ladder when values are discrete

7. COMMON MISTAKES
----------------------
- Forgetting `break`
- Using float or conditions in switch
- Missing default case

===========================================
END OF SWITCH-CASE NOTES
===========================================
*/
