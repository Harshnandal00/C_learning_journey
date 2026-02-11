#include <stdio.h>

int main() {
    /* ===============================
       THREE DIMENSIONAL ARRAY (RUNNABLE)
       =============================== */

    int arr[2][2][2] = {
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };

    printf("3D Array elements are:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

/*
===========================================
C LANGUAGE – THREE DIMENSIONAL ARRAY
===========================================

1. WHAT IS 3D ARRAY?
------------------
- Array of 2D arrays
- Access using 3 indices [i][j][k]
- Useful for complex data storage

2. SYNTAX
------------------
data_type array_name[x][y][z];

3. IMPORTANT POINTS
------------------
- Memory is contiguous in row-major order
- Index starts from 0
- Can be used for matrices, cubes, multi-level data

4. REAL-LIFE EXAMPLE
------------------
- 3D graphics coordinates, Rubik’s cube data

===========================================
END OF THREE DIMENSIONAL ARRAY NOTES
===========================================
*/
