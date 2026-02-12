#include <stdio.h>

int main() {
    /* ===============================
       COUNT LINES IN FILE (RUNNABLE)
       =============================== */

    FILE *fp = fopen("data.txt","r");
    char ch;
    int lines = 0;

    while((ch = fgetc(fp)) != EOF){
        if(ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("Total lines: %d\n", lines);

    return 0;
}

/*
===========================================
C LANGUAGE – COUNT LINES IN FILE
===========================================

1. METHOD
------------------
- Read each character
- Increment counter when '\n' found

2. REAL-LIFE EXAMPLE
------------------
- Counting number of records
- Log analysis

===========================================
END OF FILE COUNT LINES NOTES
===========================================
*/
