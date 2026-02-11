#include <stdio.h>
#include <string.h>

int main() {
    /* ===============================
       REVERSE STRING (RUNNABLE)
       =============================== */

    char str[50] = "Harsh";
    int n = strlen(str);

    printf("Original string: %s\n", str);

    for(int i=0;i<n/2;i++){
        char temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

/*
===========================================
C LANGUAGE – REVERSE STRING
===========================================

1. PURPOSE
------------------
- Reverse the characters in a string

2. SYNTAX
------------------
- Use strlen() to get length
- Swap characters from ends moving towards center

3. IMPORTANT POINTS
------------------
- Works in-place, no extra array needed
- Remember string ends with '\0'

4. REAL-LIFE EXAMPLE
------------------
- Reverse text, palindromes

===========================================
END OF REVERSE STRING NOTES
===========================================
*/
