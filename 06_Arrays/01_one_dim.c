#include <stdio.h>

int main() {
    /* ===============================
       ONE DIMENSIONAL ARRAY (RUNNABLE)
       =============================== */

    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

/*
===========================================
C LANGUAGE – ONE DIMENSIONAL ARRAY
===========================================

1. WHAT IS ONE-DIMENSIONAL ARRAY?
------------------
- A collection of elements of same type
- Stored in contiguous memory
- Accessed using index

2. SYNTAX
------------------
data_type array_name[size];

Example:
int arr[5];

3. IMPORTANT POINTS
------------------
- Index starts from 0
- Size must be constant at compile-time (unless VLA)
- Useful to store multiple values together

4. REAL-LIFE EXAMPLE
------------------
- List of student marks, daily temperatures

===========================================
END OF ONE DIMENSIONAL ARRAY NOTES
===========================================
*/
