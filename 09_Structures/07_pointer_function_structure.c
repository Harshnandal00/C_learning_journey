#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

void printStudent(struct Student *s) {
    printf("ID: %d, Name: %s, Marks: %.2f\n", s->id, s->name, s->marks);
}

int main() {
    /* ===============================
       FUNCTION WITH POINTER TO STRUCTURE (RUNNABLE)
       =============================== */

    struct Student s1 = {1, "Harsh", 95.5};
    printStudent(&s1);

    return 0;
}

/*
===========================================
C LANGUAGE – FUNCTION WITH POINTER TO STRUCTURE
===========================================

1. PURPOSE
------------------
- Pass structure pointer to function
- Allows modification of original data

2. SYNTAX
------------------
void func(struct StructName *s) { ... }

3. IMPORTANT POINTS
------------------
- Use arrow operator (->) inside function
- Efficient for large structures

4. REAL-LIFE EXAMPLE
------------------
- Update student marks in a database

===========================================
END OF POINTER FUNCTION STRUCTURE NOTES
===========================================
*/
