#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    /* ===============================
       POINTER TO STRUCTURE (RUNNABLE)
       =============================== */

    struct Student s1 = {1, "Harsh", 95.5};
    struct Student *ptr = &s1;

    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}

/*
===========================================
C LANGUAGE – POINTER TO STRUCTURE
===========================================

1. PURPOSE
------------------
- Access structure members via pointer
- Useful for dynamic structures

2. SYNTAX
------------------
struct StructName *ptr = &variable;
ptr->member

3. IMPORTANT POINTS
------------------
- Arrow operator (->) used instead of dot
- Saves memory when passing structures to functions

4. REAL-LIFE EXAMPLE
------------------
- Passing large student record to function

===========================================
END OF POINTER TO STRUCTURE NOTES
===========================================
*/
