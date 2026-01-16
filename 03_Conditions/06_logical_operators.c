#include <stdio.h>

int main() {
    /* ===============================
       LOGICAL OPERATORS (RUNNABLE)
       =============================== */

    int age;
    char has_id;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Do you have a valid ID? (y/n): ");
    scanf(" %c", &has_id);

    if (age >= 18 && (has_id == 'y' || has_id == 'Y')) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – LOGICAL OPERATORS
===========================================

1. WHAT ARE LOGICAL OPERATORS?
-----------------------------
- Used to COMBINE or MODIFY conditions
- They work on relational expressions

2. LIST OF LOGICAL OPERATORS
-----------------------------
&&   Logical AND
||   Logical OR
!    Logical NOT

3. HOW THEY WORK
-----------------------------
Condition A   Condition B   A && B   A || B
-------------------------------------------
TRUE          TRUE          TRUE     TRUE
TRUE          FALSE         FALSE    TRUE
FALSE         TRUE          FALSE    TRUE
FALSE         FALSE         FALSE    FALSE

4. LOGICAL NOT (!)
-----------------------------
- Reverses the result
- Example:
  !(age >= 18)

5. SHORT-CIRCUIT BEHAVIOR
-----------------------------
- In AND (&&): if first condition is FALSE, rest are skipped
- In OR (||): if first condition is TRUE, rest are skipped

6. COMMON MISTAKES
-----------------------------
- Forgetting parentheses
- Confusing && with &
- Confusing || with |

===========================================
END OF LOGICAL OPERATORS NOTES
===========================================
*/
