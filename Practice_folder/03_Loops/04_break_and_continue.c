//printing alphabets and trying continue and break........

// #include<stdio.h>
// int main(){
//     char i;
//     for(i='a';i<='z';i++)
//     {
//         if(i=='g' || i=='h'){
//             continue;
//         }
//         if(i=='x'){
//             break;
//         }
//         printf("%c ",i);
//     }
//     return 0;
// }

/*Problem 1: Skip negatives, stop at zero
Concepts: while + continue + sentinel
Task:
Keep taking integers from the user:
If number is negative → skip it (don’t add)
If number is positive → add to sum
If number is 0 → stop the loop*/

// #include<stdio.h>
// int main()
// {
//     int i , n , sum;
//     sum = 0;
//     i = 0;
//     while(i==0)
//     {
//         printf("please enter a number: ");
//         scanf("%d",&n);
//         if(n<0)
//         {
//             printf("invalid input\n");
//             continue;
//         }
//         sum = sum+n;
//         if(n==0)
//         {
//             break;
//         }
//     }
//     printf("the total sum of the valid numbers = %d",sum);
//     return 0;
// }

/*Problem 2: Print numbers 1–50 but…
Concepts: for + continue
Task:
Print numbers from 1 to 50:
Skip numbers divisible by 3
Stop printing completely if number reaches 40*/

// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=50;i++){
//         if(i%3 == 0){
//             continue;
//         }
//         if(i==40){
//             break;
//         }
//         printf("%d\n",i);
//     }
// }

/*Problem 3: Menu-based calculator.
Concepts: do-while + switch + break.
Menu:
1. Add
2. Subtract
3. Multiply
4. Exit
Task:
Ask user to choose an option
Perform operation on two numbers
Repeat until user selects Exit*/

// #include<stdio.h>
// int main()
// {
//     int num1,num2,n,add,sub,mult;
//     printf("please choose an option:\n(1) for addition\n(2) for subtraction\n(3) for multiply\n(4) for Exit\n");
//     do
//     {
//         printf("Please enter your choice: ");
//         scanf("%d",&n);
//         if(n==4){
//             break;
//         }
//         printf("please enter your numbers:\na = ");
//         scanf("%d",&num1);
//         printf("b = ");
//         scanf("%d",&num2);
//         switch (n)
//         {
//             case 1:
//             add = num1+num2;
//             printf("the addition of two numbers is: %d\n",add);
//             break;
//             case 2:
//             sub = num1-num2;
//             printf("the subtraction of two numbers is: %d\n",sub);
//             break;
//             case 3:
//             mult = num1*num2;
//             printf("the multiplication of two numbers is: %d\n",mult);
//             break;
//             case 4:
//             break;
//             default:
//             printf("please enter a valid number.\n");
//             break;
//         }
//     } while (n!=4);
//     return 0;
// }

/*Problem 4: First 10 valid even numbers
Concepts: while + continue
Task:
Keep taking numbers from user:
Ignore odd numbers
Count only even numbers
Stop after 10 valid even numbers
Print their sum*/

// #include<stdio.h>
// int main(){
//     int n,sum,count;
//     sum = 0 , count = 0;
//     while(1){
//         printf("please enter a valid even number: ");
//         scanf("%d",&n);
//         if(n<0 || n%2!=0){
//             continue;
//         }
//         count = count+1;
//         sum = sum + n;
//         if(count==10){
//             break;
//         }
//     }
//     printf("The sum of the first 10 valid even numbers is: %d",sum);
//     return 0;
// }

/*Problem 5 (🔥 Challenge): Prime number checker
Concepts: for + break
Task:
Check whether a given number is prime.
Rules:
If divisible by any number other than 1 & itself → not prime
Stop checking as soon as you find a divisor*/

// #include<stdio.h>
// int main(){
//     int i,isPrime,n;
//     printf("Please enter the digit to check if it is prime: ");
//     scanf("%d",&n);
//         isPrime = 1;
//     for(i=2;i<=n/2;i++){
//         if(n%i==0){
//             isPrime = 0;
//             break;
//         }
//     }
//     if(isPrime == 1){
//     printf("the number is a prime number.\n");
//     }else if(isPrime==0){
//         printf("the number is not a prime number.\n");
//     }
//     return 0;
// }

























