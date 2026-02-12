#include <stdio.h>

union Value {
    int i;
    float f;
};

int main() {

    union Value arr[3];

    arr[0].i = 10;
    arr[1].i = 20;
    arr[2].i = 30;

    for(int i=0;i<3;i++) {
        printf("%d\n", arr[i].i);
    }

    return 0;
}

/*
===========================================
ARRAY OF UNIONS
===========================================

1. YES, WE CAN CREATE ARRAY

Each element:
- Has its own shared memory
- But members inside one element share memory

2. USE CASE
------------------
- When storing different types dynamically
- Tagged unions (advanced concept)

===========================================
END NOTES
===========================================
*/
