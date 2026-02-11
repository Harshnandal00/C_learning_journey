#include <stdio.h>

int main() {
    /* ===============================
       STRING BASICS (RUNNABLE)
       =============================== */

    char name[10] = "Harsh";
    printf("My name is %s\n", name);

    return 0;
}

/*
===========================================
C LANGUAGE – STRING BASICS
===========================================

1. WHAT IS A STRING?
------------------
- Array of characters ending with '\0' (null character)
- Used to store text in C

2. SYNTAX
------------------
char str[size];
char str[] = "text";

3. IMPORTANT POINTS
------------------
- Strings must end with '\0'
- Can access individual characters with index
- Can be modified if not string literal

4. REAL-LIFE EXAMPLE
------------------
- Storing names, addresses, messages

===========================================
END OF STRING BASICS NOTES
===========================================
*/
