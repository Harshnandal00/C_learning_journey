#include <stdio.h>

int main() {
    /* ===============================
       APPEND FILE (RUNNABLE)
       =============================== */

    FILE *fp = fopen("data.txt", "a");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Appending this line.\n");
    fclose(fp);

    printf("Line appended successfully.\n");

    return 0;
}

/*
===========================================
C LANGUAGE – APPEND FILE
===========================================

1. APPEND MODE
------------------
- fopen("filename","a")
- Adds data at the end
- Does NOT erase existing data

2. USE CASE
------------------
- Logs
- History of events

3. IMPORTANT POINTS
------------------
- Pointer is positioned at EOF
- Can also read in append mode using "a+"

===========================================
END OF APPEND FILE NOTES
===========================================
*/
