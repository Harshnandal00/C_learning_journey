/*..............Problem 1...................
Search for a given element in an array.
Print index if found, else print "Element not found".*/

// #include<stdio.h>
// int main(){
//     int n,key=0,found;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("please enter the element you want to find: ");
//     scanf("%d",&key);
//     for(int i = 0;i<=n-1;i++){
//         if(array[i]==key){
//             printf("the element you wanted has been found at index %d",i);
//             found = 0;
//             break;
//         }
//     }
//     if(found!=0){
//         printf("the element you wanted is not in this array.");
//     }
//     return 0;
// }

/*..............Problem 2...................
Count how many times a given number appears in the array.*/

// #include<stdio.h>
// int main(){
//     int n,found=0,key;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("please enter the number you want to find: ");
//     scanf("%d",&key);
//     for(int i =0;i<=n-1;i++){
//         if(array[i]==key){
//             found = found+1;
//         }
//     }if(found==0){
//         printf("the number you want to find is not in the array.");
//     }else{
//         printf("the number(%d) is %d times in the array.\n",key,found);
//     }
//     return 0;
// }

/*..............Problem 3...................
Search an element and stop the loop immediately once found.*/

// #include<stdio.h>
// int main(){
//     int n,found,check;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i =0 ; i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("please enter the element you want to find: ");
//     scanf("%d",&found);
//     for(int i =0;i<=n-1;i++){
//         if(array[i]==found){
//             printf("the element was found at %dth index.",i);
//             check = 1;
//             break;
//         }
//     }if(check != 1){
//         printf("the element was not found in the array.");
//     }
//     return 0;
// }
