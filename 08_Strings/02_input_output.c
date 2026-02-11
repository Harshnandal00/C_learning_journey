#include <stdio.h>

int main() {
    /* ===============================
       STRING INPUT & OUTPUT (RUNNABLE)
       =============================== */

    char str[50];
    printf("Enter your name: ");
    scanf("%s", str);  // reads string until space
    printf("Hello %s!\n", str);

    return 0;
}

/*
===========================================
C LANGUAGE – STRING INPUT & OUTPUT
===========================================

1. INPUT USING scanf
------------------
- Reads string until whitespace
- Syntax: scanf("%s", str);

2. OUTPUT USING printf
------------------
- Print using %s format specifier
- printf("%s", str);

3. IMPORTANT POINTS
------------------
- Use fgets() for reading strings with spaces
- Always provide enough array size

4. REAL-LIFE EXAMPLE
------------------
- Entering username, messages, or commands

===========================================
END OF STRING INPUT & OUTPUT NOTES
===========================================
*/
