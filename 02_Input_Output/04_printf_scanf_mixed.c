#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE printf + scanf MIXED
       =============================== */

    int age;
    float height;
    char grade;
    char name[20];

    // Ask user for multiple inputs
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);  // space before %c important

    // Print all collected info neatly
    printf("\n===== USER INFO =====\n");
    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Height: %.2f meters\n", height);  // 2 decimal places
    printf("Grade : %c\n", grade);

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – printf + scanf MIXED
===========================================

1. COLLECTING INPUT
-------------------
- scanf reads user input and stores it in variables
- Always match format specifier with variable type
- Use & for int, float, char; arrays (strings) do NOT need &

2. PRINTING OUTPUT
-------------------
- printf prints variables in readable format
- %.2f → float with 2 decimal places
- Use \n for new lines

3. ORDER OF INPUT
-------------------
- scanf reads in the order you ask
- Space before %c skips leftover newline characters

4. EXAMPLE FLOW
-------------------
Input: 
John
25
5.9
A

Output:
===== USER INFO =====
Name  : John
Age   : 25
Height: 5.90 meters
Grade : A

5. TIPS
-------------------
- Always test each input type separately first
- Keep prompts clear for the user
- Escape sequences like \n improve readability

===========================================
END OF printf + scanf MIXED NOTES
===========================================
*/
