#include <stdio.h>

int main() {
    /* ===============================
       SEARCH IN ARRAY (RUNNABLE)
       =============================== */

    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int found = 0;

    for(int i=0;i<5;i++){
        if(arr[i] == key){
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element %d not found\n", key);

    return 0;
}

/*
===========================================
C LANGUAGE – SEARCH IN ARRAY
===========================================

1. PURPOSE
------------------
- Find index of a specific element

2. SYNTAX
------------------
for(i=0;i<size;i++){
    if(arr[i] == key){
        // found
    }
}

3. IMPORTANT POINTS
------------------
- Can use break to stop after first match
- Works for linear search
- For sorted array, binary search is faster

4. REAL-LIFE EXAMPLE
------------------
- Searching student roll number, phone number in list

===========================================
END OF SEARCH IN ARRAY NOTES
===========================================
*/
