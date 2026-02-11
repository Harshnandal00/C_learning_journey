#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    /* ===============================
       STRUCTURE BASICS (RUNNABLE)
       =============================== */

    struct Student s1 = {1, "Harsh", 95.5};

    printf("ID: %d\nName: %s\nMarks: %.2f\n", s1.id, s1.name, s1.marks);

    return 0;
}

/*
===========================================
C LANGUAGE – STRUCTURE BASICS
===========================================

1. WHAT IS STRUCTURE?
------------------
- User-defined data type
- Combines different data types
- Useful for grouping related data

2. SYNTAX
------------------
struct StructureName {
    data_type member1;
    data_type member2;
    ...
};

3. IMPORTANT POINTS
------------------
- Declared globally or locally
- Access members with dot operator

4. REAL-LIFE EXAMPLE
------------------
- Student record: id, name, marks

===========================================
END OF STRUCTURE BASICS NOTES
===========================================
*/
