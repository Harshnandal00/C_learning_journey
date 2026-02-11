#include <stdio.h>

int main() {
    /* ===============================
       FIND MAX & MIN IN ARRAY (RUNNABLE)
       =============================== */

    int arr[5] = {10, 50, 20, 40, 30};
    int max = arr[0], min = arr[0];

    for(int i=1;i<5;i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Maximum = %d, Minimum = %d\n", max, min);

    return 0;
}

/*
===========================================
C LANGUAGE – FIND MAX & MIN IN ARRAY
===========================================

1. PURPOSE
------------------
- Determine largest and smallest elements in array

2. SYNTAX
------------------
max = arr[0]; min = arr[0];
for(i=1;i<n;i++){
    if(arr[i] > max) max = arr[i];
    if(arr[i] < min) min = arr[i];
}

3. IMPORTANT POINTS
------------------
- Works for any numeric array
- Can find both in a single loop

4. REAL-LIFE EXAMPLE
------------------
- Highest and lowest marks, temperature extremes

===========================================
END OF MAX & MIN ARRAY NOTES
===========================================
*/
