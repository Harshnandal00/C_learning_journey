#include <stdio.h>
#include <string.h>

int main() {
    /* ===============================
       STRING FUNCTIONS (RUNNABLE)
       =============================== */

    char str1[20] = "Hello";
    char str2[20] = "World";

    printf("Length of str1 = %lu\n", strlen(str1));
    strcpy(str1, "Hi");
    strcat(str1, str2);
    printf("After strcat: %s\n", str1);
    printf("Compare str1 & str2: %d\n", strcmp(str1,str2));

    return 0;
}

/*
===========================================
C LANGUAGE – STRING FUNCTIONS
===========================================

1. COMMON STRING FUNCTIONS
------------------
- strlen(str) → length of string
- strcpy(dest, src) → copy string
- strcat(dest, src) → concatenate
- strcmp(str1,str2) → compare strings

2. IMPORTANT POINTS
------------------
- Include <string.h> header
- Destination array must be large enough
- strcmp returns 0 if strings are equal

3. REAL-LIFE EXAMPLE
------------------
- Manipulating names, messages, or file paths

===========================================
END OF STRING FUNCTIONS NOTES
===========================================
*/
