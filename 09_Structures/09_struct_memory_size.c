#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    /* ===============================
       SIZE OF STRUCTURE (RUNNABLE)
       =============================== */

    struct Student s1;
    printf("Size of Student structure = %lu bytes\n", sizeof(s1));

    return 0;
}

/*
===========================================
C LANGUAGE – SIZE OF STRUCTURE
===========================================

1. PURPOSE
------------------
- Find memory occupied by structure
- Includes padding for alignment

2. SYNTAX
------------------
sizeof(struct StructName);

3. IMPORTANT POINTS
------------------
- Depends on system & compiler
- Important for dynamic memory allocation

4. REAL-LIFE EXAMPLE
------------------
- Allocating memory for array of structures

===========================================
END OF SIZE OF STRUCTURE NOTES
===========================================
*/
