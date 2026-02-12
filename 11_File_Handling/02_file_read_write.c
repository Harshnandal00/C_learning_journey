#include <stdio.h>

int main() {
    /* ===============================
       READ & WRITE FILE (RUNNABLE)
       =============================== */

    FILE *fp;
    char str[100];

    // Write to file
    fp = fopen("data.txt","w");
    fprintf(fp, "This is a sample line.\n");
    fclose(fp);

    // Read from file
    fp = fopen("data.txt","r");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    while(fgets(str, sizeof(str), fp) != NULL){
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}

/*
===========================================
C LANGUAGE – READ & WRITE FILE
===========================================

1. WRITING FILE
------------------
- fopen("filename","w")
- fprintf(fp, "text")

2. READING FILE
------------------
- fopen("filename","r")
- fgets(buffer, size, fp)

3. IMPORTANT POINTS
------------------
- Always check if fp == NULL
- Close file after operation

4. REAL-LIFE EXAMPLE
------------------
- Log messages
- Saving configuration data

===========================================
END OF READ & WRITE FILE NOTES
===========================================
*/
