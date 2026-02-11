#include <stdio.h>

int main() {
    /* ===============================
       SUM OF ARRAY ELEMENTS (RUNNABLE)
       =============================== */

    int arr[5] = {1,2,3,4,5};
    int sum = 0;

    for(int i=0;i<5;i++){
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

/*
===========================================
C LANGUAGE – SUM OF ARRAY ELEMENTS
===========================================

1. PURPOSE
------------------
- Compute total of all elements in array

2. SYNTAX
------------------
sum = 0;
for(i=0;i<size;i++)
    sum += arr[i];

3. IMPORTANT POINTS
------------------
- Works for any data type supporting '+'
- Loop must cover all indices

4. REAL-LIFE EXAMPLE
------------------
- Total marks, total expenses, total scores

===========================================
END OF SUM OF ARRAY ELEMENTS NOTES
===========================================
*/
