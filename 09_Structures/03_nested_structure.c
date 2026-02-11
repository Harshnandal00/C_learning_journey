#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int id;
    char name[20];
    struct Date dob; // nested structure
};

int main() {
    /* ===============================
       NESTED STRUCTURE (RUNNABLE)
       =============================== */

    struct Student s1 = {1, "Harsh", {10, 2, 2005}};

    printf("ID: %d\nName: %s\nDOB: %d/%d/%d\n",
            s1.id, s1.name, s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}

/*
===========================================
C LANGUAGE – NESTED STRUCTURE
===========================================

1. WHAT IS NESTED STRUCTURE?
------------------
- Structure as a member of another structure
- Helps organize related data

2. SYNTAX
------------------
struct Outer {
    struct Inner member;
};

3. IMPORTANT POINTS
------------------
- Access nested members using dot operator
- Can be used with arrays too

4. REAL-LIFE EXAMPLE
------------------
- Student with nested DOB or address structure

===========================================
END OF NESTED STRUCTURE NOTES
===========================================
*/
