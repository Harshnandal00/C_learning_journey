#include <stdio.h>
int main() {
    int a; //variable declaration
    a = 3; //variable initialization
    printf("The output of this program is %d", a);
    return 0;
}

/*
===========================================
C LANGUAGE – VARIABLE NAMING RULES
===========================================

1. A variable name can contain:
   - Alphabets (A–Z, a–z)
   - Digits (0–9)
   - Underscore (_)

2. A variable name MUST start with:
   - A letter (a–z or A–Z)
   - OR an underscore (_)
   - It CANNOT start with a digit

   ✔ valid: count, _total, value1
   ✘ invalid: 1value, 2sum

3. Variable names are CASE-SENSITIVE:
   - age, Age, and AGE are different variables

4. No spaces are allowed in variable names:
   ✔ total_marks
   ✘ total marks

5. Special characters are NOT allowed:
   ✘ @, #, $, %, &, *

6. C keywords CANNOT be used as variable names:
   Examples of keywords:
   int, float, return, if, else, while, for, char

   ✘ int int;
   ✘ float return;

7. Variable names should be meaningful:
   ✔ totalMarks
   ✔ student_age
   ✘ x, y, a (unless used in small loops)

8. Use underscore (_) for readability (recommended for beginners):
   ✔ total_marks
   ✔ student_count

9. Avoid very long variable names:
   ✔ average_score
   ✘ this_is_the_average_score_of_all_students_in_class

10. Variable names should clearly describe their purpose:
    ✔ salary
    ✔ temperature
    ✔ is_logged_in

===========================================
END OF RULES
===========================================
*/