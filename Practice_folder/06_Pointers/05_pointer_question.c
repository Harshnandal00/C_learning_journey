/*🟡 5. Pointer and Array Basics
👉 Create an array of 5 integers
👉 Use a pointer to print array elements
Do this in 2 ways:
Using arr[i]
Using pointer arithmetic: *(ptr + i)
💡 Understand that array name itself is a pointer.*/

#include<stdio.h>
int main(){
    int n,*ptr;
    printf("please enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    //taking elements as input via pointers.....
    ptr = &array[0];
    printf("please enter the elements of the array: \n");
    for(int i = 0;i<n;i++){
        scanf("%d",ptr+i);
    }
    //printing array that we just made>>
    for(int i = 0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}
