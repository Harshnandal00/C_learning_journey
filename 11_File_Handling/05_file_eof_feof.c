#include <stdio.h>

int main() {
    /* ===============================
       CHECK EOF (RUNNABLE)
       =============================== */

    FILE *fp = fopen("data.txt", "r");
    char ch;

    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    while(!feof(fp)){
        ch = fgetc(fp);
        if(ch != EOF)
            putchar(ch);
    }

    fclose(fp);

    return 0;
}

/*
===========================================
C LANGUAGE – EOF & feof()
===========================================

1. EOF
------------------
- End Of File marker
- Returned by fgetc, fscanf at file end

2. feof(fp)
------------------
- Returns non-zero when EOF is reached

3. IMPORTANT POINTS
------------------
- Use feof carefully
- fgetc/fscanf may read one extra time if not checked

4. REAL-LIFE EXAMPLE
------------------
- Reading data till end of file
- Log processing

===========================================
END OF EOF NOTES
===========================================
*/
