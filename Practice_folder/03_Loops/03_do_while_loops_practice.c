//printing natural numbers till n(input)......

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Please enter a value: ");
//     scanf("%d",&n);
//     i = 1;
//     printf("Natural numbers till %d\n",n);
//     do
//     {
//         printf("%d\n",i);
//         i++;
//     } while (i<=n);
//     return 0;
// }

//printing first n even numbers..........

// #include<stdio.h>
// int main(){
//     int i,n,count;
//     printf("Please enter the number: ");
//     scanf("%d",&n);
//     i = 2;
//     count = 1;
//     printf("Even numbers till %d:\n",n);
//     do
//     {
//         printf("%d\n",i);
//         i = i+2;
//         count = count + 1;
//     } while (count <= n);
// }

//sum numbers until users enter 0........

// #include<stdio.h>
// int main(){
//     int sum,num;
//     sum = 0;
//     do
//     {
//         printf("Please enter the number(enter 0 to exit): ");
//         scanf("%d",&num);
//         sum = sum+num;
//     } while (num != 0);
//     printf("total sum of all the valid inputs entered: %d",sum);
//     return 0;
// }

//validate input(1 to 10).......

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Please enter numbers between 1 to 10.\n");
//     do
//     {
//         printf("enter the number: ");
//         scanf("%d",&num);
//         printf("You entered: %d\n",num);
//     } while (num<1 || num>10);
//     return 0;
// }

//Print multiplication table of N.......

// #include<stdio.h>
// int main(){
//     int i,n;
//     i = 0;
//     printf("Please enter the number: ");
//     scanf("%d",&n);
//     printf("The Table Of %d\n",n);
//     do
//     {
//         printf("%d x %d = %d\n",n,i,n*i);
//         i++;
//     } while (i<= 10);
//     return 0;
// }

//Reverse a number.....

// #include<stdio.h>
// int main(){
//     int num,rev,digit;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     digit = 0;
//     rev = 0;
//     do
//     {
//         digit = num%10;
//         num = num/10;
//         rev = rev*10 + digit;
//     } while (num != 0);
//     printf("the reversed number is: %d",rev);
//     return 0;
// }

//count digits of an entered number......

// #include<stdio.h>
// int main(){
//     int num,count;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     count = 0;
//     do
//     {
//         num = num/10;
//         count = count+1;
//     } while (num!=0);
//     printf("the no. of digits in the entered number: %d",count);
//     return 0;
// }

//checking if a number is a palindrome or not.......

// #include<stdio.h>
// int main(){
//     int num,rev,digit,org_num;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     org_num = num;
//     rev = 0;
//     digit = 0;
//     do
//     {
//         digit = num%10;
//         num = num/10;
//         rev = rev*10 + digit;
//     } while (num!=0);
//     printf("reversed no. is: %d\n",rev);
//     printf("original number is: %d\n",org_num);
//     if(org_num == rev){
//         printf("The number you entered is a palindrome no.");
//     }else{
//         printf("The number you entered is not a palindrome no.");
//     }
//     return 0;
// }

//simple menu repeat......

// #include<stdio.h>
// int main(){
//     int num;
//     do
//     {
//         printf("Please select one from the following:\n1. Hello\n2. Goodbye\n3. Exit.\n");
//         printf("Please enter the value: ");
//         scanf("%d",&num);
//     } while (num!=3);
//     return 0;
// }

//Sum first N numbers......

// #include<stdio.h>
// int main(){
//     int i,n,sum;
//     printf("please enter the number: ");
//     scanf("%d",&n);
//     sum = 0;
//     i = 1;
//     do
//     {
//         sum = sum + i;
//         i++;
//     } while (i<=n);
//     printf("The sum of first %d numbers is: %d\n",n,sum);
//     return 0;
// }

//Number Menu + Running Sum + Validation

// #include<stdio.h>
// int main(){
//     int num,sum,count;
//     float avg;
//     count = 0;
//     sum = 0;
//     do
//     {
//         printf("please enter an integer(0 to stop): ");
//         scanf("%d",&num);
//         if(num<0){
//         printf("invalid input! please re-enter\n");
//         }
//         else if(num>0){
//             sum = sum+num;
//             count = count+1;
//         }
//     } while (num!=0);
//     if(count>0){
//         avg = (float)sum/count;
//         printf("The total sum of all valid inputs: %d\n",sum);
//         printf("The avg of all the valid numbers: %.3f\n",avg);
//     }else{
//         printf("please enter a valid number.");
//     }
//     return 0;
// }
