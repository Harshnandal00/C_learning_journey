#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    float marks;
} Student;

int main() {
    /* ===============================
       TYPEDEF STRUCTURE (RUNNABLE)
       =============================== */

    Student s1 = {1, "Harsh", 95.5};
    printf("ID: %d, Name: %s, Marks: %.2f\n", s1.id, s1.name, s1.marks);

    return 0;
}

/*
===========================================
C LANGUAGE – TYPEDEF STRUCTURE
===========================================

1. PURPOSE
------------------
- Simplify structure name
- Avoid writing 'struct' every time

2. SYNTAX
------------------
typedef struct {
    members...
} TypeName;

3. IMPORTANT POINTS
------------------
- Can declare multiple objects easily
- Same access rules with dot or arrow

4. REAL-LIFE EXAMPLE
------------------
- Simplify code when handling many structures

===========================================
END OF TYPEDEF STRUCTURE NOTES
===========================================
*/
