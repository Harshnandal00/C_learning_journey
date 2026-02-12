#include <stdio.h>

int main() {
    /* ===============================
       SORT NUMBERS IN FILE (RUNNABLE)
       =============================== */

    FILE *fp = fopen("numbers.txt","r");
    int arr[100], n=0;

    while(fscanf(fp,"%d",&arr[n]) != EOF) n++;
    fclose(fp);

    // Bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

/*
===========================================
C LANGUAGE – SORT NUMBERS IN FILE
===========================================

1. METHOD
------------------
- Read numbers into array
- Apply sorting algorithm
- Print sorted list

2. REAL-LIFE EXAMPLE
------------------
- Sorting marks or data stored in file
- Preprocessing before analysis

===========================================
END OF SORT NUMBERS NOTES
===========================================
*/
