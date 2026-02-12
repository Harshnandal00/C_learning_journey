#include <stdio.h>

union Payment {
    int cash;
    char card[20];
};

int main() {

    union Payment p;

    p.cash = 500;
    printf("Paid in cash: %d\n", p.cash);

    return 0;
}

/*
===========================================
REAL LIFE PRACTICAL USE
===========================================

Example:
A payment can be:
- Cash
- Card number

But never both at same time.

So union saves memory.

===========================================

ADVANCED CONCEPT: TAGGED UNION
--------------------------------
Often used with structure:

struct PaymentType {
    int type; // 1 = cash, 2 = card
    union Payment p;
};

This tells which member is active.

===========================================
END UNION MASTER NOTES
===========================================
*/
