#include <stdio.h>

int main() {
    /* ===============================
       SORT ARRAY (RUNNABLE)
       =============================== */

    int arr[5] = {50, 10, 40, 20, 30};
    int n = 5;

    // Bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

/*
===========================================
C LANGUAGE – SORT ARRAY
===========================================

1. PURPOSE
------------------
- Arrange array elements in order (ascending/descending)

2. SIMPLE METHOD
------------------
- Bubble sort: compare adjacent elements and swap

3. IMPORTANT POINTS
------------------
- Many sorting algorithms exist: bubble, selection, insertion, quicksort
- Choose based on array size & efficiency

4. REAL-LIFE EXAMPLE
------------------
- Sorting marks, names, scores

===========================================
END OF SORT ARRAY NOTES
===========================================
*/
