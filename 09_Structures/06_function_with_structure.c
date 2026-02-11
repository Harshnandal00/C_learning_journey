#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

void printStudent(struct Student s) {
    printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);
}

int main() {
    /* ===============================
       FUNCTION WITH STRUCTURE (RUNNABLE)
       =============================== */

    struct Student s1 = {1, "Harsh", 95.5};
    printStudent(s1);

    return 0;
}

/*
===========================================
C LANGUAGE – FUNCTION WITH STRUCTURE
===========================================

1. PURPOSE
------------------
- Pass structure to function
- Can be by value or by reference

2. SYNTAX
------------------
void func(struct StructName s) { ... }

3. IMPORTANT POINTS
------------------
- Passing by value copies structure
- Passing pointer allows modification

4. REAL-LIFE EXAMPLE
------------------
- Print or update student records via functions

===========================================
END OF FUNCTION WITH STRUCTURE NOTES
===========================================
*/
