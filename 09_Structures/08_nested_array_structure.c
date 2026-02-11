#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks[3]; // array inside structure
};

int main() {
    /* ===============================
       ARRAY INSIDE STRUCTURE (RUNNABLE)
       =============================== */

    struct Student s1 = {1, "Harsh", {90.5, 95.0, 88.0}};

    printf("ID: %d, Name: %s\n", s1.id, s1.name);
    for(int i=0;i<3;i++)
        printf("Marks[%d] = %.2f\n", i, s1.marks[i]);

    return 0;
}

/*
===========================================
C LANGUAGE – ARRAY INSIDE STRUCTURE
===========================================

1. PURPOSE
------------------
- Store multiple values of same type inside structure
- Useful for storing multiple marks, scores

2. SYNTAX
------------------
struct StructName {
    data_type arr[size];
};

3. IMPORTANT POINTS
------------------
- Access using arr[i] inside structure
- Can combine with nested structures

4. REAL-LIFE EXAMPLE
------------------
- Student with marks in multiple subjects

===========================================
END OF ARRAY INSIDE STRUCTURE NOTES
===========================================
*/
