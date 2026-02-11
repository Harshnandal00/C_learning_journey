#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    /* ===============================
       ARRAY OF STRUCTURES (RUNNABLE)
       =============================== */

    struct Student s[3] = {
        {1, "Harsh", 95.5},
        {2, "Aman", 88.0},
        {3, "Riya", 92.3}
    };

    for(int i=0;i<3;i++){
        printf("ID: %d, Name: %s, Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}

/*
===========================================
C LANGUAGE – ARRAY OF STRUCTURES
===========================================

1. PURPOSE
------------------
- Store multiple structure objects
- Iterate using loops

2. SYNTAX
------------------
struct StructName arr[size];

3. IMPORTANT POINTS
------------------
- Useful for student lists, inventory
- Access using arr[i].member

4. REAL-LIFE EXAMPLE
------------------
- Class of students, list of books

===========================================
END OF ARRAY OF STRUCTURES NOTES
===========================================
*/
