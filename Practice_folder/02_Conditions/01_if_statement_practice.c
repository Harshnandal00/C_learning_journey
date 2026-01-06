//===========practice code 1================//

// #include<stdio.h>
// int main(){
//     int age;
//     printf("Please enter your age: ");
//     scanf("%d",&age);
//     if(age>=18){
//         printf("you are eligible to vote.");
//     }else{
//     printf("you are not eligible to vote.");}
//     return 0;
// }

//===========practice code 2================//

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("please enter value of a: ");
//     scanf("%d",&a);
//     printf("please enter value of b: ");
//     scanf("%d",&b);
//     //comparison in between number a and b
//     if(a>b){
//         printf("a is greater than b.\n");
//     }else{
//         printf("b is greater than a.\n");
//     }
//     return 0;
// }

//===========practice code 3================//

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("please enter value of a: ");
//     scanf("%d", &a);
//     printf("please enter value of b: ");
//     scanf("%d", &b);
//     printf("please enter value of c: ");
//     scanf("%d", &c);
//     printf("a = %d", a);
//     printf("b = %d", b);
//     printf("c = %d", c);
//     if (a > b && a > c)
//     {
//         printf("a is greater than b and c.\n");
//     }
//     else if (b > a && b > c)
//     {
//         printf("b is greater than a and c.\n");
//     }
//     else
//     {
//         printf("c is greater than a and b.\n");
//     }
//     return 0;
// }

//===========practice code 4================//

// #include<stdio.h>
// int main(){
//     char alph1;
//     printf("please enter a alphabets: ");
//     scanf("%c",&alph1);
//     if(alph1 == 'a' || alph1 == 'i' || alph1 == 'e' || alph1 == 'o' || alph1 == 'u' || alph1 == 'A' || alph1 == 'I' || alph1 == 'E' || alph1 == 'O' || alph1 == 'U'){
//         printf("alphabet1 is a vowel, that is: %c\n",alph1);}
//         else{
//             printf("alphabet1 is not a vowel, but a constant.");
//         }
//     return 0;
// }

//===========practice code 5================//

// #include<stdio.h>
// int main(){
//     int num1,rem;
//     printf("please enter an integer: ");
//     scanf("%d",&num1);
//     rem = num1%2;
//     if(rem == 0){
//         printf("the number you entered is even.\n");
//     }else{
//         printf("the number you entered is odd.\n");
//     }
//     return 0;
// }

//===========practice code 6================//

// #include<stdio.h>
// int main(){
//     int num;
//     printf("please enter any one integer: ");
//     scanf("%d",&num);
//     if(num==0){
//         printf("You have entered 0");
//     }else if(num > 0){
//         printf("you have entered a +ve integer.\n");
//     }else{
//         printf("you have entered a -ve integer.\n");
//     }
//     return 0;
// }

//===========practice code 7================//

// #include<stdio.h>
// int main(){
//     int eng,hindi,math,evs,sum,total_marks;
//     float percentage;
//     printf("enter your eng subject marks: ");
//     scanf("%d",&eng);
//     printf("enter your hindi subject marks: ");
//     scanf("%d",&hindi);
//     printf("enter your math subject marks: ");
//     scanf("%d",&math);
//     printf("enter your evs subject marks: ");
//     scanf("%d",&evs);
//     total_marks = 400;
//     sum = eng+hindi+math+evs;
//     percentage = (float)sum*100/total_marks;
//     printf("Your total marks = %d\n",sum);
//     printf("Your total percentage = %.2f\n",percentage);
//     if(percentage>=90){
//         printf("Grade A+");
//     }else if(percentage>=80){
//         printf("Grade A");
//     }else if(percentage>=70){
//         printf("Grade B");
//     }else if(percentage>=60){
//         printf("Grade C");
//     }else if(percentage>=50){
//         printf("Grade D");
//     }else if(percentage>=40){
//         printf("Grade E");
//     }else{
//         printf("YOU FAILED! Grade F");
//     }
//     return 0;
// }

//===========practice code 8================//

// #include<stdio.h>
// int main(){
//     int unit;
//     float rate, bill;
//     printf("Please enter the rate of unit in rs: ");
//     scanf("%f",&rate);
//     printf("please enter the unit consumed this month: ");
//     scanf("%d",&unit);
//     bill = rate*unit;
//     printf("this is the bill for this month: %.2frs.\nPlease pay the bill till 10th of the next month.",bill);
//     return 0;
// }

//===========practice code 9================//

// #include<stdio.h>
// int main(){
//     int year;
//     printf("Please enter a year: ");
//     scanf("%d", &year);
//     if (year % 400 == 0){
//         printf("The entered year is a leap year.");
//     }
//     else if (year % 100 == 0){
//         printf("The entered year is not a leap year.");
//     }
//     else if (year % 4 == 0){
//         printf("The entered year is a leap year.");
//     }
//     else{
//         printf("The entered year is not a leap year.");
//     }
//}
// // another method //
//     if(year%400==0 || (year%4==0 && year%100!=0)){
//         printf("The entered year is a leap year");
//     }else{
//         printf("The entered year is not a leap year");
//     }
//      return 0;
// }

//===========practice code 10===============//

// #include<stdio.h>
// int main(){
//     int num1;
//     printf("please enter a number:");
//     scanf("%d",&num1);
//     if(num1%7==0 || num1%10==7){
//         printf("The number you entered is a buzz number.");
//     }else{
//         printf("the number you entered is not a buzz number.");
//     }
//     return 0;
// }

//===========practice code 11===============//

// #include<stdio.h>
// int main(){
//     float cp, sp,margin;
//     printf("please enter the original price: ");
//     scanf("%f",&cp);
//     printf("please enter the selling price: ");
//     scanf("%f",&sp);
//     margin = sp - cp;
//     if(margin > 0){
//         printf("You have made a profit of %.2frs.\n",margin);
//     }else if(margin < 0){
//         printf("You are in a loss of %.2frs.\n",-margin);
//     }else{
//         printf("you neither made a profit nor a loss.");
//     }
//     return 0;
//     }

//===========practice code 12===============//

// #include<stdio.h>
// int main(){
//     float balance,input,original;
//     printf("please enter the original amount in your account: ");
//     scanf("%f",&original);
//     if(original < 3000){
//         printf("Your account should at least have 3000rs.");
//     }else{
//     printf("please enter the transaction amount: ");
//     scanf("%f",&input);
//     balance = original - input;
//     if(input < original && balance >= 3000){
//         printf("Transaction successful\namount remained: %.3f\n",balance);
//     }else if(input <= original && balance < 3000){
//         printf("Transaction failed.\nThe account should have at least 100rs left after a transaction.");
//     }else if(input > original){
//         printf("The amount entered is greater than or equal to the balance in your account.\nPlease select a low amount.\nammount left in account: %.3f\n");
//     }else{
//         printf("Transaction failed!");
//     }
// }
//     return 0;
// }

//===========practice code 13===============//

// #include<stdio.h>
// int main(){
//     char name[50];
//     int age;
//     int credit_score;
//     float salary;
//     float loan_amount;
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if(age<25){
//         printf("you are not eligible for a loan.");
//     }
//     printf("Enter your monthly salary: ");
//     scanf("%f", &salary);
//     printf("Enter your credit score: ");
//     scanf("%d", &credit_score);
//     if (credit_score >= 750 && salary >= 30000 && age>25)
//     {
//         loan_amount = salary * 10;
//         printf("\nLoan Approved!\n");
//         printf("Hello %s, you can get a loan of Rs %.2f\n", name, loan_amount);
//     }
//     else if (credit_score >= 650 && salary >= 20000 && age>25)
//     {
//         loan_amount = salary * 5;
//         printf("\nLoan Approved!\n");
//         printf("Hello %s, you can get a loan of Rs %.2f\n", name, loan_amount);
//     }
//     else if (credit_score >= 550 && salary >= 15000 && age>25)
//     {
//         loan_amount = salary * 2;
//         printf("\nLoan Approved!\n");
//         printf("Hello %s, you can get a loan of Rs %.2f\n", name, loan_amount);
//     }
//     else
//     {
//         printf("\nLoan Rejected!\n");
//         printf("Sorry %s, you are not eligible for a loan.\n", name);
//     }
//     return 0;
// }

// =========practice problem 7============

// #include<stdio.h>
// int main(){
//     int eng,hindi,math,evs,sum,total_marks;
//     float percentage;
//     printf("enter your eng subject marks: ");
//     scanf("%d",&eng);
//     printf("enter your hindi subject marks: ");
//     scanf("%d",&hindi);
//     printf("enter your math subject marks: ");
//    scanf("%d",&math);
//     printf("enter your evs subject marks: ");
//     scanf("%d",&evs);
//     total_marks = 400;
//     sum = eng+hindi+math+evs;
//     percentage = (float)sum*100/total_marks;
//     printf("Your total marks = %d\n",sum);
//     printf("Your total percentage = %.2f\n",percentage);
//     if(percentage>=90){
//         printf("Grade A+");
//     }else if(percentage>=80){
//         printf("Grade A");
//     }else if(percentage>=70){
//         printf("Grade B");
//     }else if(percentage>=60){
//         printf("Grade C");
//     }else if(percentage>=50){
//         printf("Grade D");
//     }else if(percentage>=40){
//         printf("Grade E");
//     }else{
//         printf("YOU FAILED! Grade F");
//     }
//     return 0;
// }