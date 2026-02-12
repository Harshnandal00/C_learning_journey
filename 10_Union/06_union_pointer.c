#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {

    union Data d;
    union Data *ptr = &d;

    ptr->i = 100;

    printf("Value using pointer: %d\n", ptr->i);

    return 0;
}

/*
===========================================
POINTER TO UNION
===========================================

1. ACCESS USING ->
------------------
ptr->member

2. WHY IMPORTANT?
------------------
- Used in dynamic memory
- Used in system programming
- Used in linked data structures

===========================================
END NOTES
===========================================
*/
