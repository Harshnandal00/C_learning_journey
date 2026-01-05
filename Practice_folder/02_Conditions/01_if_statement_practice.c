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
#include<stdio.h>
int main(){
    char alph1;
    printf("please enter a alphabets: ");
    scanf("%c",&alph1);
    if(alph1 == 'a' || alph1 == 'i' || alph1 == 'e' || alph1 == 'o' || alph1 == 'u' || alph1 == 'A' || alph1 == 'I' || alph1 == 'E' || alph1 == 'O' || alph1 == 'U'){
        printf("alphabet1 is a vowel, that is: %c\n",alph1);}
        else{
            printf("alphabet1 is not a vowel, but a constant.");
        }
    return 0;
}