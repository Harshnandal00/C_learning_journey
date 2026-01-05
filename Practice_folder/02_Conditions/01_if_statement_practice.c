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

//========practice code 2================

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

//=======practice code 3===========
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

//===========practice code 4===============
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

//============practice code 5==============
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

// //==========practice problem 6============
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
#include<stdio.h>
int main(){
    int eng,hindi,math,evs,sum,total_marks;
    float percentage;
    printf("enter your eng subject marks: ");
    scanf("%d",&eng);
    printf("enter your hindi subject marks: ");
    scanf("%d",&hindi);
    printf("enter your math subject marks: ");
    scanf("%d",&math);
    printf("enter your evs subject marks: ");
    scanf("%d",&evs);
    total_marks = 400;
    sum = eng+hindi+math+evs;
    percentage = (float)sum*100/total_marks;
    printf("Your total marks = %d\n",sum);
    printf("Your total percentage = %.2f\n",percentage);
    if(percentage>=90){
        printf("Grade A+");
    }else if(percentage>=80){
        printf("Grade A");
    }else if(percentage>=70){
        printf("Grade B");
    }else if(percentage>=60){
        printf("Grade C");
    }else if(percentage>=50){
        printf("Grade D");
    }else if(percentage>=40){
        printf("Grade E");
    }else{
        printf("YOU FAILED! Grade F");
    }
    return 0;
}