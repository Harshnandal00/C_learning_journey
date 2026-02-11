#include <stdio.h>

int main() {
    /* ===============================
       TWO DIMENSIONAL ARRAY (RUNNABLE)
       =============================== */

    int matrix[2][3] = {{1,2,3}, {4,5,6}};

    printf("Matrix elements are:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
===========================================
C LANGUAGE – TWO DIMENSIONAL ARRAY
===========================================

1. WHAT IS TWO-DIMENSIONAL ARRAY?
------------------
- Array of arrays (matrix)
- Access using two indices [row][col]

2. SYNTAX
------------------
data_type array_name[rows][cols];

3. IMPORTANT POINTS
------------------
- Row-major storage in memory
- Index starts from 0
- Useful for tables, grids

4. REAL-LIFE EXAMPLE
------------------
- Seating chart, chess board

===========================================
END OF TWO DIMENSIONAL ARRAY NOTES
===========================================
*/
