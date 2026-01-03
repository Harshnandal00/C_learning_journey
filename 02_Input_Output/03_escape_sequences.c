#include <stdio.h>

int main() {
    /* ===============================
       RUNNABLE ESCAPE SEQUENCES EXAMPLES
       =============================== */

    printf("Hello World!\n");            // \n → new line
    printf("Line1\nLine2\nLine3\n");    // multiple new lines

    printf("Column1\tColumn2\tColumn3\n"); // \t → tab spacing
    printf("1\t2\t3\n4\t5\t6\n");         // multiple rows

    printf("This is a backslash: \\\n");  // \\ → prints \
    printf("Quotes: \"Hello, C!\"\n");    // \" → prints double quote

    printf("Mixing escape sequences:\n");
    printf("Name:\tJohn Doe\nAge:\t25\n");

    /* ===============================
       END OF RUNNABLE EXAMPLES
       =============================== */

    return 0;
}

/*
===========================================
C LANGUAGE – ESCAPE SEQUENCES
===========================================

1. WHAT ARE ESCAPE SEQUENCES?
-------------------
- Special characters that control formatting in output
- Always start with a backslash (\)

2. COMMON ESCAPE SEQUENCES
-------------------
\n → New line
\t → Tab space
\\ → Backslash
\" → Double quote
\' → Single quote
\b → Backspace
\r → Carriage return

3. HOW THEY WORK
-------------------
- \n moves cursor to next line
- \t moves cursor to the next tab stop (usually every 8 characters)
- \\ prints a single backslash
- \" prints a double quote inside string

4. TIPS
-------------------
- Combine them for clean formatting
- Use tabs carefully, as alignment depends on word length
- Newlines make output readable
- Don’t mix escape sequences with raw numbers in printf without understanding

5. EXAMPLES
-------------------
printf("Hello\nWorld"); → prints:
Hello
World

printf("Col1\tCol2"); → prints:
Col1    Col2   (spacing depends on terminal)

printf("Quote: \"C Language\""); → prints:
Quote: "C Language"

===========================================
END OF ESCAPE SEQUENCES NOTES
===========================================
*/
