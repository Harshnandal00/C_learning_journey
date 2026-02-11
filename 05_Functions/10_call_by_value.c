#include <stdio.h>

void changeValue(int x);

int main() {
    /* ===============================
       CALL BY VALUE (RUNNABLE)
       =============================== */

    int num = 10;
    changeValue(num);
    printf("Value in main after function = %d\n", num);

    return 0;
}

void changeValue(int x) {
    x = 50;
    printf("Value inside function = %d\n", x);
}

/*
===========================================
C LANGUAGE – CALL BY VALUE
===========================================

1. WHAT IS CALL BY VALUE?
------------------
- Copy of variable passed to function
- Original variable remains unchanged

2. SYNTAX
------------------
function_name(variable);

3. IMPORTANT POINTS
------------------
- Changes inside function do not affect original
- Safe way to avoid accidental modification

4. REAL-LIFE EXAMPLE
------------------
- Copy of homework passed to friend → your original stays safe

===========================================
END OF CALL BY VALUE NOTES
===========================================
*/
