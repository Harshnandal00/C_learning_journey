#include <stdio.h>

struct Student {
    char name[20];
    int roll;
};

union Info {
    struct Student s;
    int id;
};

int main() {

    union Info data;

    data.id = 101;
    printf("ID: %d\n", data.id);

    data.s.roll = 55;
    printf("Roll: %d\n", data.s.roll);

    return 0;
}

/*
===========================================
UNION WITH STRUCTURE
===========================================

1. YES, STRUCT CAN BE INSIDE UNION

2. WHY USE?
------------------
When you want:
- Either complete struct
- Or simple identifier
- But not both simultaneously

3. IMPORTANT
------------------
When struct is used,
other members lose validity.

===========================================
END NOTES
===========================================
*/
