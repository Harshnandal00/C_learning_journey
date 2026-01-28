/*reversal of an array of any size*/

// #include<stdio.h>
// int main(){
//     int temp,n;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i=0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }printf("\n");
//     printf("this is the array you entered: ");
//     for(int i = 0;i<n;i++){
//         printf("%d ",array[i]);
//     }printf("\n");
//     for(int i=0;i<n/2;i++){
//         temp = array[i];
//         array[i] = array[n-1-i];
//         array[n-1-i] = temp;
//     }
//     printf("the array in reversed form: ");
//     for(int i = 0;i<n;i++){
//         printf(" %d ",array[i]);
//     }
//     return 0;
// }

/*rotation of an array by 1 element to the left*/

// #include<stdio.h>
// int main(){
//     int n,temp;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&array[i]);
//     }
//     temp = array[0];
//     for(int i = 0;i<=n-1;i++){
//         array[i] = array[i+1];
//     }
//     array[n-1] = temp;
//     printf("the array after rotation to the left by 1: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",array[i]);
//     }
//     return 0;
// }

/*the rotation of the array elements to the right by 1*/

// #include<stdio.h>
// int main(){
//     int n,temp;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&array[i]);
//     }
//     temp = array[n-1];
//     for(int i = n-1;i>0;i--){
//         array[i] = array[i-1];
//     }
//     array[0] = temp;
//     printf("the array after rotation to the right by 1: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",array[i]);
//     }
//     return 0;
// }

/*rotation of the array to left side by k times*/

// #include<stdio.h>
// int main(){
//     int n,temp,k;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("please enter the number of the rotations: ");
//     scanf("%d",&k);
//     k = k%n;
//     for(int i = 0;i<k;i++){
//         temp = array[0];
//         for(int i = 0;i<=n-1;i++){
//             array[i] = array[i+1];
//         }
//         array[n-1] = temp;
//     }printf("the array after %d left rotations: ",k);
//     for(int i=0;i<n;i++){
//         printf(" %d ",array[i]);
//     }
//     return 0;
// }

/*rotation of the array to right side by k times*/

// #include<stdio.h>
// int main(){
//     int n,temp,k;
//     printf("please enter the size of the array: ");
//     scanf("%d",&n);
//     int array[n];
//     printf("please enter the elements of the array: ");
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&array[i]);
//     }
//     printf("please enter the number of the rotations: ");
//     scanf("%d",&k);
//     k = k%n;
//     for(int i = 0;i<k;i++){
//         temp = array[n-1];
//         for(int i = n-1;i>0;i--){
//             array[i] = array[i-1];
//         }
//         array[0] = temp;
//     }printf("the array after %d right rotations: ",k);
//     for(int i=0;i<n;i++){
//         printf(" %d ",array[i]);
//     }
//     return 0;
// }


