#include <stdio.h>

typedef union {
    int i;
    float f;
} Number;

int main() {

    Number n;

    n.i = 25;
    printf("Integer: %d\n", n.i);

    return 0;
}

/*
===========================================
TYPEDEF WITH UNION
===========================================

1. WHY TYPEDEF?
------------------
- Makes code cleaner
- Removes need to write 'union' keyword

Instead of:
union Number n;

We write:
Number n;

2. COMMON IN REAL PROJECTS

===========================================
END NOTES
===========================================
*/
