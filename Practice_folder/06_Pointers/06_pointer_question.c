/*
🟡 6. Sum of Array Using Pointer Arithmetic
👉 Take 5 elements from user
👉 Use pointer only (not arr[i])
👉 Calculate sum
💡 Only use:
*(ptr + i)
*/

#include<stdio.h>
int Arraysum(int *pointer, int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum = sum + *(pointer+i);
    }
    return sum;
}
int main(){
    int size,*pointer;
    printf("please enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    pointer = &array[0];
    printf("please enter the elements of the array: ");
    for(int i = 0;i<size;i++){
        scanf("%d",pointer+i);
    }
    printf("sum of all the elements of the array is %d.",Arraysum(pointer,size));
    return 0;
}
