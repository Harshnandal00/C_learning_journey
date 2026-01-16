#include <stdio.h>

int main() {
    /* ===============================
       IF-ELSE-IF LADDER (RUNNABLE)
       =============================== */

    int marks;

    printf("Enter marks (0–100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Marks must be between 0 and 100.\n");
    }
    else if (marks >= 90) {
        printf("Grade: A+\n");
    }
    else if (marks >= 75) {
        printf("Grade: A\n");
    }
    else if (marks >= 60) {
        printf("Grade: B\n");
    }
    else if (marks >= 40) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }

    /* ===============================
       END OF RUNNABLE EXAMPLE
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – IF-ELSE-IF LADDER
===========================================

1. WHAT IS AN IF-ELSE-IF LADDER?
--------------------------------
- Used when you have MORE THAN TWO conditions
- Conditions are checked TOP to BOTTOM
- First TRUE condition executes, rest are skipped

2. SYNTAX
--------------------------------
if (condition1) {
    // code
}
else if (condition2) {
    // code
}
else if (condition3) {
    // code
}
else {
    // default case
}

3. IMPORTANT BEHAVIOR
--------------------------------
- Order of conditions MATTERS
- Once a condition is true, remaining checks stop
- Always keep the most specific conditions at the top

4. WHY RANGE CHECK FIRST?
--------------------------------
if (marks < 0 || marks > 100)
- Prevents invalid input from entering grading logic
- This is REAL-WORLD defensive programming

5. COMMON MISTAKES
--------------------------------
- Wrong ordering of conditions
- Overlapping ranges
- Forgetting a final `else` (default case)

6. WHEN TO USE
--------------------------------
- Grading systems
- Menu selections (small)
- Categorizing values into ranges

===========================================
END OF IF-ELSE-IF LADDER NOTES
===========================================
*/
