#include <stdio.h>

int main() {
    /* ===============================
       FILE POINTER POSITIONING (RUNNABLE)
       =============================== */

    FILE *fp = fopen("data.txt","r");
    fseek(fp, 5, SEEK_SET); // move 5 bytes from start
    printf("Character at position 6: %c\n", fgetc(fp));
    fclose(fp);

    return 0;
}

/*
===========================================
C LANGUAGE – FILE POINTER POSITION
===========================================

1. fseek(fp, offset, origin)
------------------
- Moves file pointer to desired position
- origin: SEEK_SET, SEEK_CUR, SEEK_END

2. ftell(fp)
------------------
- Returns current file pointer position

3. rewind(fp)
------------------
- Moves pointer to start

4. REAL-LIFE EXAMPLE
------------------
- Random access file reading
- Skipping headers in data files

===========================================
END OF FILE POINTER NOTES
===========================================
*/
