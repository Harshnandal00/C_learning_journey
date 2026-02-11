#include <stdio.h>

int main() {
    /* ===============================
       STRING INPUT USING fgets & OUTPUT USING fputs (RUNNABLE)
       =============================== */

    char str[50];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // reads string with spaces

    printf("You entered: ");
    fputs(str, stdout);

    return 0;
}

/*
===========================================
C LANGUAGE – STRING INPUT USING fgets & OUTPUT USING fputs
===========================================

1. fgets()
------------------
- Reads string including spaces
- Syntax: fgets(str, size, stdin);

2. fputs()
------------------
- Prints string without format specifier
- Syntax: fputs(str, stdout);

3. IMPORTANT POINTS
------------------
- fgets stores newline '\n' if present
- Size argument prevents buffer overflow

4. REAL-LIFE EXAMPLE
------------------
- Reading full lines, paragraphs from user input

===========================================
END OF STRING fgets/fputs NOTES
===========================================
*/
