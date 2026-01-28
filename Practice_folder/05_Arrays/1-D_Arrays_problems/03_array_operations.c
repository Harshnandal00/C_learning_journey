/*..............Problem 1................
Find and print the sum and average of array elements.*/

// #include<stdio.h>
// int main(){
//     int n,sum = 0 ,count =0;
//     float avg =0;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//         sum = sum + array[i];
//         count = count + 1;
//     }
//     printf("array = {");
//     for (int i = 0; i<=n-2; i++){
//         printf("%d, ",array[i]);
//     }printf("%d}\n",array[n-1]);
//     avg = (float)sum/count;
//     printf("total elements in the array = %d\ntotal sum of this array = %d\naverage of all the elements of the array = %.3f",count,sum,avg);
// }

/*..............Problem 2................
Find the largest and smallest element in an array.*/

// #include<stdio.h>
// int main(){
//     int n, large,small;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }
//     large = array[0] , small = array[0];
//     for(int i = 0;i<=n-1;i++){
//         if(large<array[i]){
//             large = array[i];
//         }else if(small>array[i]){
//             small = array[i];
//         }
//     }
//     printf("largest element in the array = %d\nsmallest element in the array = %d",large,small);
//     return 0;
// }

/*..............Problem 3................
Count how many elements are:
positive
negative
zero*/

#include<stdio.h>
int main(){
    int n,count = 0,zero =0 , pstv = 0 , neg = 0;
    printf("please enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("please enter the elements of the array: ");
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&array[i]);
        count = count+1;
        if(array[i]>0){
            pstv = pstv+1;
        }else if (array[i]<0){
            neg = neg +1;
        }else{
            zero = zero +1;
        }
    }printf("total no. of elements in the array: %d\ntotal no. of positive elements: %d\ntotal no. of negative elements: %d\ntotal no. of 0's in the array: %d",count,pstv,neg,zero);
    return 0;
}
