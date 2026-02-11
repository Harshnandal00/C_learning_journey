#include <stdio.h>
#include <string.h>

int main() {
    /* ===============================
       COPY & COMPARE STRINGS (RUNNABLE)
       =============================== */

    char str1[20] = "Hello";
    char str2[20];

    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    if(strcmp(str1,str2)==0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}

/*
===========================================
C LANGUAGE – COPY & COMPARE STRINGS
===========================================

1. STRING COPY
------------------
- strcpy(dest, src) → copies src to dest

2. STRING COMPARE
------------------
- strcmp(str1, str2) → returns 0 if equal

3. IMPORTANT POINTS
------------------
- Destination array must be large enough
- Compare returns >0 or <0 if not equal

4. REAL-LIFE EXAMPLE
------------------
- Copy user input, compare passwords

===========================================
END OF COPY & COMPARE STRING NOTES
===========================================
*/
