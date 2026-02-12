#include <stdio.h>

int main() {
    /* ===============================
       COPY FILE (RUNNABLE)
       =============================== */

    FILE *src = fopen("data.txt","r");
    FILE *dest = fopen("copy.txt","w");
    char ch;

    while((ch=fgetc(src)) != EOF)
        fputc(ch,dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}

/*
===========================================
C LANGUAGE – COPY FILE
===========================================

1. METHOD
------------------
- Read char by char from source
- Write char by char to destination

2. IMPORTANT
------------------
- Can also use binary mode for binary files

3. REAL-LIFE EXAMPLE
------------------
- Backup files
- Duplicating logs

===========================================
END OF FILE COPY NOTES
===========================================
*/
