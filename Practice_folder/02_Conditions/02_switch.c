// #include<stdio.h>
// int main(){
//     int value;
//     printf("enter any number btw 1 to 7 = ");
//     scanf("%d",&value);
//     switch (value){
//     case 1: printf("monday");
//     break;
//     case 2: printf("tuesday");
//     break;
//     case 3: printf("wednesday");
//     break;
//     case 4: printf("thrusday");
//     break;
//     case 5: printf("friday");
//     break;
//     case 6: printf("saturday");
//     break;
//     case 7: printf("sunday");
//     break;
//     default: printf("you have entered incorrect case");
//     break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char value;
//     printf("enter any capital alphabet between A to G: ");
//     scanf("%c",&value);
//     switch (value){
//     case 'A': printf("monday");
//     break;
//     case 'B': printf("tuesday");
//     break;
//     case 'C': printf("wednesday");
//     break;
//     case 'D': printf("thrusday");
//     break;
//     case 'E': printf("friday");
//     break;
//     case 'F': printf("saturday");
//     break;
//     case 'G': printf("sunday");
//     break;
//     default: printf("you have entered incorrect case");
//     break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float num1,num2;
//     char op_sign;
//     printf("please enter the 1st number: ");
//     scanf("%f",&num1);
//     printf("please enter the 2nd number:");
//     scanf("%f",&num2);
//     printf("please enter the operation sign.");
//     scanf(" %c",&op_sign);
//     switch (op_sign){
//     case '+':
//         printf("addition is %f",num1+num2);
//         break;
//     case '-':
//         printf("subtraction of the 2 numbers is: %f",num1 - num2);
//         break;
//     case '*':
//         printf("multiplication of the 2 numbers is: %f",num1 * num2);
//         break;
//     case '/':
//         printf("division of the 2 numbers is: %f",num1 / num2);
//         break;
//     // case '%':
//     //     printf("remainder of the 2 numbers is: %f", num1 % num2);
//     //     break;
//     default:
//         printf("invalid input!\nPlease try again.");
//         break;
//     }
// }

// #include<stdio.h>
// int main(){
//     int total_amount,current_pin,new_pin,check_pin;
//     float withdraw_amount;
//     char option;
//     total_amount = 100000;
//     printf("Please enter your card pin: ");
//     scanf("%d",&current_pin);
//     if(current_pin == 9870){
//         printf("enter option 'a' for cash withdrawl\nenter option 'b' for check_balance\nenter option 'c' for change_pin\n");
//         printf("Please enter the option you want to select: ");
//         scanf(" %c",&option);
//         switch (option)
//         {
//         case 'a':
//             printf("plese enter the amount you want to withdraw: ");
//             scanf("%f",&withdraw_amount);
//             if(withdraw_amount<=total_amount && withdraw_amount > 0){
//                 total_amount -= withdraw_amount;
//                 printf("withdraw successful!\nbalance_left = %d",total_amount);
//             }else{
//                 printf("withdraw failed!\nplease enter a valid amount.");
//             }
//             break;
//         case 'b':
//             printf("You total balance left in account = %.2f",total_amount);
//             break;
//         case 'c':
//             printf("please enter your current pin first: ");
//             scanf("%d",&check_pin);
//             if(check_pin == current_pin){
//                 printf("please enter your new pin: ");
//                 scanf("%d",&new_pin);
//                 printf("pin change successful!\nNow this is your current pin.");
//                 current_pin = new_pin;
//             }else{
//                 printf("Wrong pin entered.\nPlease enter your correct pin: %d",current_pin);
//             }
//             break;
//         default:
//             printf("Invalid input!\nplease choose a correct option!");
//             break;
//         }
//     }else{
//         printf("please enter your correct pin.");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int integer;
    float eng, hindi, math, science, ss, percent, sum;
    printf("please enter your english marks: ");
    scanf("%f", &eng);
    printf("please enter your hindi marks: ");
    scanf("%f", &hindi);
    printf("please enter your maths marks: ");
    scanf("%f", &math);
    printf("please enter your science marks: ");
    scanf("%f", &science);
    printf("please enter your social science marks: ");
    scanf("%f", &ss);
    sum = eng + hindi + math + science + ss;
    percent = (sum * 100) / 500;
    if (percent >= 90)
    {
        integer = 1;
    }
    else if (percent >= 80)
    {
        integer = 2;
    }
    else if (percent >= 70)
    {
        integer = 3;
    }
    else if (percent >= 60)
    {
        integer = 4;
    }
    switch (integer)
    {
    case 1:
        if (percent >= 90)
        {
            printf("Grade A+");
        }
        break;

    case 2:
        if (percent >= 80)
        {
            printf("Grade A");
        }
        break;

    case 3:
        if (percent >= 70)
        {
            printf("Grade B+");
        }
        break;

    case 4:
        if (percent >= 60)
        {
            printf("Grade B");
        }
        break;
    default:
        printf("Grade F");
        break;
    }
    return 0;
}