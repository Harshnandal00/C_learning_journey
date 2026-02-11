#include <stdio.h>

int main() {
    /* ===============================
       REVERSE ARRAY (RUNNABLE)
       =============================== */

    int arr[5] = {1,2,3,4,5};
    int n = 5;

    printf("Original array:\n");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Reverse
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("Reversed array:\n");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

/*
===========================================
C LANGUAGE – REVERSE ARRAY
===========================================

1. PURPOSE
------------------
- Reverse the order of elements in an array

2. SYNTAX
------------------
for(i=0;i<n/2;i++){
    temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = temp;
}

3. IMPORTANT POINTS
------------------
- Only swap first half with second half
- Works in-place, no extra array needed

4. REAL-LIFE EXAMPLE
------------------
- Reverse queue, undo recent actions

===========================================
END OF REVERSE ARRAY NOTES
===========================================
*/
