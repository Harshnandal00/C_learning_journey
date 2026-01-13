//=====problem 1 , printing numbers 1 to 'n'==========

// #include<stdio.h>
// int main(){
//     // primitive method , lengthy , not easy to type...
//     // printf("Hello World\nHello World\nHello World\nHello World\nHello World\n");
//     int i,n;
//     printf("please enter the value of n: ");
//     scanf("%d",&n);
//     for(i = 1;i<=n;i++){ // for loop (initialization,condition,increment/decrement)
//         printf("%d\n",i);
//     }
//     return 0;
// }

//=====problem 2 , even numbers from 1 to 'n'=========

// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("please enter the value of n: ");
//     scanf("%d",&n);
//     for(i = 0;i<=n/2;i++){
//         printf("%d\n",i*2);
//     }
// }

//====problem 3 , count how many no. are divisible by 3 till n=======

// #include<stdio.h>
// int main(){
//     int n , i;
//     printf("please enter the value of n: ");
//     scanf("%d",&n);
//     for(i = 1;i<=n;i++){
//         if(i%3 == 0){
//             printf("%d\n",i);
//         }
//     }
// }

//====problem 4 , sum of numbers from 1 to n===========

// #include<stdio.h>
// int main(){
//     int sum,i,n;
//     printf("Please enter the value of 'n': ");
//     scanf("%d",&n);
//     sum = 0;
//     for(i = 0; i<=n; i++){
//         sum += i;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

//====problem 5 , Print 1 to N  // Print N to 1 // Print table of N using switch statement======

// #include<stdio.h>
// int main(){
//     int n,choice,i,result;
//     printf("Please enter the value of n: ");
//     scanf("%d",&n);
//     printf("1. Print 1 to n\n2. Print n to 1\n3. Print table of n\nYour choice: ");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         for(i = 1;i<=n;i++){
//         printf("%d\n",i);
//         }
//         break;
//     case 2:
//         for(i = n;i>0&&i<=n;i--){
//             printf("%d\n",i);
//         }
//         break;
//     case 3:
//         for(i =1;i<=n;i++){
//             result = n*i;
//             printf("%d x %d = %d\n",n,i,result);
//             }
//         break;
//     default:
//         printf("invalid choice!\nrestart the program.");
//         break;
//     }
//     return 0;
// }

//====problem 6 , input 5 no. using for loop and then checking how many +ve , -ve , 0 are there......-==========

// #include<stdio.h>
// int main(){
//     int i , n , positive , negative ,zero;
//     positive = 0 , negative = 0 , zero = 0;
//     for(i = 1 ; i<=5 ; i++){
//         printf("enter number: ");
//         scanf("%d",&n);
//         if(n >0){
//             (positive++);
//         }else if(n<0){
//             (negative++);
//         }else{
//             (zero++);
//         }
//     }
//         printf("no of +ve input: %d\nno of -ve input: %d\nno of 0: %d\n",positive,negative,zero);
//     return 0;
// }

//====problem 7 , factorial of a n==========

// #include<stdio.h>
// int main(){
//     int i , n ,factorial = 1;
//     printf("Please enter the value of n: ");
//     scanf("%d",&n);
//     for(i = n ;i>=1 ; i--){
//         factorial = (factorial * i);
//     }
//     printf("factorial of number 'n' = %d!",factorial);
//     return 0;
//}

// ====problem 8 , making star patteren....-======

// #include<stdio.h>
// int main(){
//     int i , j;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// ====problem 9 , making star pattern inverted ======

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=4;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ====problem 10 , making a new star pattern=====

// #include<stdio.h>
// int main(){
//     int i , j;
//     char sp;
//     sp = ' ';
//     for(i=1;i<=4;i++){
//         for(j = 4 ; j>=1+i ; j--){
//             printf("%c",sp);
//         }
//         for(j = 1; j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//=====problem 11 , making a inverted new star pattern=====

// #include<stdio.h>
// int main(){
//     int i,j;
//     char sp;
//     sp = ' ';
//     for(i=4;i>=1;i--){
//         for(j=1;j<=4-i;j++){
//             printf("%c",sp);
//         }
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ====problem 12 , making a middle aligned pyramid star patteren====

// int main(){
//     int i, j;
//     char sp = ' ';
//     for(i = 1; i <= 4; i++) {
//         for(j = 1; j <= 4 - i; j++) {
//             printf("%c", sp);
//         }
//         for(j = 1; j <= (2*i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// all star patterns in one code....

// #include<stdio.h>
// int main(){
//     int i,j;
//     char sp;
//     sp = ' ';
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(i=4;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4-i;j++){
//             printf("%c",sp);
//         }
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(i=4;i>=1;i--){
//         for(j=1;j<=4-i;j++){
//             printf("%c",sp);
//         }
//         for(j=4;j>=4-i+1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(i=1;i<=4;i++){
//         for(j=1;j<4-i+1;j++){
//             printf("%c",sp);
//         }
//         for(j=1;j<=2*i-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(i=4;i>=1;i--){
//         for(j=1;j<=4-i;j++){
//             printf("%c",sp);
//         }for(j=1;j<=2*i-1;j++){
//             printf("*");
//         }printf("\n");
//     }
//     return 0;
// }

