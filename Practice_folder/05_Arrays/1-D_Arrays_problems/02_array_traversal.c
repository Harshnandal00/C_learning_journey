// //entering the values in arrays and printing the values of the arrays

// #include<stdio.h>
// int main(){
//     int result[5];
//     printf("please enter the result values:\t");
//     for(int i = 0; i<5; i++){
//         scanf("%d",&result[i]);
//     }
//     printf("your entered marks are:\t");
//     for(int i = 0; i<5; i++){
//         printf("%d",result[i]);
//     }
//     return 0;
// }

/*..............Problem 1..................
Take n elements from the user into an array and print them using a for loop.*/

// #include<stdio.h>
// int main(){
//     int n;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array:\n");
//     for(int i = 0;i<n;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("array = ");
//     for(int i = 0;i<n;i++){
//         printf("%d ",array[i]);
//     }
//     return 0;
// }

/*..............Problem 2.....................
Print the array elements in reverse order using traversal logic.*/

// #include<stdio.h>
// int main(){
//     int n,array[5];
//     printf("enter the elements of the array: ");
//     for(int i=0;i<=4;i++){
//         scanf("%d",&array[i]);
//     }
//     for(int j = 0;j<=4;j++){
//         printf("%d ",array[j]);
//     }
//     printf("\narray elements in reverse order: ");
//     for(int i=4;i>=0;i--){
//         printf("%d ",array[i]);
//     }
//     return 0;
// }

/*...........Problem 3........................
enter the element in even and printout in odd */

// #include<stdio.h>
// int main(){
//     int array[5];
//     printf("please enter the 5 elements of the array(even only): ");
//     for(int i = 0;i<=4;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("printing odd elements: ");
//     for(int i=0;i<=4;i++){
//         printf("%d ",array[i]+1);
//     }
//     return 0;
// }

/*...........Problem 4........................
Print the elements of even indexes and odd indexes of the array seperately.*/

// #include<stdio.h>
// int main(){
//     int array[10];
//     printf("enter the elements of the array: ");
//     for(int i = 0;i<=9;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("even indexes are: {");
//     for(int i = 0; i<=9;i++){
//         if(i%2==0){
//             printf(" %d ",array[i]);
//         }
//     }printf("}\narray no. at odd indexes: {");
//     for(int i = 0;i<=9;i++){
//         if(i%2!=0){
//             printf(" %d ",array[i]);
//         }
//     }printf("}");
//     return 0;
// }

/*.............Problem 5......................
Print the even and odd elements of the array seperately */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }printf("even elements in the array: {");
//     for(int i = 0;i<=n-1;i++){
//         if(array[i]%2==0){
//             printf("%d, ",array[i]);
//         }
//     }printf("}\nodd elements in the array: {");
//     for(int i = 0;i<=n-1;i++){
//         if(array[i]%2!=0){
//             printf("%d, ",array[i]);
//         }
//     }printf("}");
//     return 0;
// }
