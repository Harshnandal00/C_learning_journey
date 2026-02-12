#include <stdio.h>

int main() {
    /* ===============================
       FILE BASICS (RUNNABLE)
       =============================== */

    FILE *fp; // file pointer
    fp = fopen("example.txt", "w"); // open file for writing

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello World!\n"); // write to file
    fclose(fp); // close file

    printf("File written successfully.\n");

    return 0;
}

/*
===========================================
C LANGUAGE – FILE BASICS
===========================================

1. FILE POINTER
------------------
- Declared as FILE *ptr
- Used to read/write files

2. fopen()
------------------
- Opens file with mode
- Modes: "r" read, "w" write, "a" append

3. fprintf() / fscanf()
------------------
- Write / read formatted data
- Works like printf / scanf but with FILE *

4. fclose()
------------------
- Close file to free memory
- Important to avoid corruption

5. REAL-LIFE EXAMPLE
------------------
- Storing logs, saving scores, text data

===========================================
END OF FILE BASICS NOTES
===========================================
*/
