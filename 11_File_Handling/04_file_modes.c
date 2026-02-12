#include <stdio.h>

int main() {
    /* ===============================
       FILE MODES (RUNNABLE)
       =============================== */

    printf("File modes in C:\n");
    printf("r  -> read only\n");
    printf("w  -> write only (create/overwrite)\n");
    printf("a  -> append only\n");
    printf("r+ -> read/write\n");
    printf("w+ -> write/read (overwrite)\n");
    printf("a+ -> append/read\n");

    return 0;
}

/*
===========================================
C LANGUAGE – FILE MODES
===========================================

1. FILE MODES
------------------
- "r"  → read, must exist
- "w"  → write, creates or overwrites
- "a"  → append, writes at EOF
- "r+" → read & write
- "w+" → write & read (overwrite)
- "a+" → append & read

2. IMPORTANT POINTS
------------------
- Choosing mode carefully avoids data loss
- "r+" cannot create new file
- "w+" always creates or overwrites

3. REAL-LIFE EXAMPLE
------------------
- Config files: read & write
- Log files: append

===========================================
END OF FILE MODES NOTES
===========================================
*/
