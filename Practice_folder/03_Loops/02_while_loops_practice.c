//..........while loop...........

//printing natural numbers till 10 , odd and even numbers till 50

// #include<stdio.h>
// int main(){
//     int i,n,odd,even;
//     odd=1;
//     even = 1;
//     printf("please enter the value for i: ");
//     scanf("%d",&i);
//     printf("please enter the value for n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
//     while(odd <=50){
//         if(odd%2 != 0){
//             printf("odd = '%d\n",odd);
//         }
//         odd++;
//     }printf("\n");
//     while(even <=50){
//         if(even%2 == 0){
//             printf("even = '%d'\n",even);
//         }
//         even++;
//     }
// }

//printing table of any number 'n'

// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("Please enter the number 'n' = ");
//     scanf("%d",&n);
//     i = 1;
//     while(i<=10){
//         printf("%d x %d = %d\n",n,i,i*n);
//         i++;
// }

//2208 = 8022 convert using while loop

// #include<stdio.h>
// int main(){
//     int i,n,rev;
//     printf("Please enter the value of n: ");
//     scanf("%d",&n);
//     rev = 0;
//     while(n != 0){
//         i = n%10;
//         rev = rev*10 + i;
//         n = n/10;
//     }
//     printf("the reversed number of your entered no is: %d\n",rev);
// }

//Count digits in a number

// #include<stdio.h>
// int main(){
//     int num,count;
//     count = 0;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     while(num != 0){
//         num = num/10;
//         count = count + 1;
//     }
//     printf("The no. of numbers in the input is = %d",count);
// }

//Sum of digits

// #include<stdio.h>
// int main(){
//     int num,sum,last_digit;
//     printf("Please enter a number: ");
//     scanf("%d",&num);
//     sum = 0;
//     while(num != 0){
//         last_digit = num%10;
//         sum = sum+last_digit;
//         num = num/10;
//     }
//     printf("The sum of all the digits in your entered number: %d",sum);
//     return 0;
// }

//product of digits

// #include<stdio.h>
// int main(){
//     int num,product,digit;
//     printf("Please enter the digits in num: ");
//     scanf("%d",&num);
//     product = 1;
//     while(num != 0){
//         digit = num%10;
//         product = product*digit;
//         num = num/10;
//     }
//     printf("the product of all the digits in your number: %d",product);
//     return 0;
// }

//Print digits one per line in order...

// #include<stdio.h>
// int main(){
//     int num , digit,rev,digit2;
//     digit = 0;
//     rev = 0;
//     printf("Please enter the value of the num: ");
//     scanf("%d",&num);
//     printf("all the digits in a new line:\n");
//     while(num!=0){
//     digit = num%10;
//     num = num/10;
//     rev = rev*10 + digit;
//     }
//     while(rev!=0){
//         digit2 = rev%10;
//         rev = rev/10;
//         printf("%d\n",digit2);
//     }
//     return 0;
// }

//palindrome number check...
//palindrome = num == reversed_num.

// #include<stdio.h>
// int main(){
//     int org_num,num,digit1,digit2,rev;
//     printf("Please enter the value of the num: ");
//     scanf("%d",&num);
//     digit1 = 0;
//     digit2 = 0;
//     rev = 0;
//     org_num = num;
//     while(num != 0){
//         digit1 = num%10;
//         num = num/10;
//         rev = rev*10 + digit1;
//     }
//     if(org_num == rev){
//         printf("The number you entered is a palindrome number.\nnumber: %d == reversed(number): %d",org_num,rev);
//     }else{
//         printf("the number you entered is not palindrome number.");
//     }
//     return 0;
// }

//Count even and odd digits in the number entered....

// #include<stdio.h>
// int main(){
//     int num,odd,even,digit;
//     odd = 0 , even = 0 , digit = 0 ;
//     printf("Please enter your number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         digit = num%10;
//         num = num/10;
//         if(digit%2 == 0){
//             even = even+1;
//         }else if(digit%2 != 0 && digit != 0){
//             odd = odd+1;
//         }
//     }printf("The number of even digits in your number: %d\n",even);
//     printf("The number of odd digits in your number: %d\n",odd);
//     return 0;
// }

//Largest digit in a number

// #include<stdio.h>
// int main(){
//     int num,digit,large;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     large = 0;
//     while(num != 0){
//         digit = num%10;
//         num = num/10;
//         if(large < digit){
//             large = digit;
//         }
//     }printf("The largest digit in the number: %d\n",large);
//     return 0;
// }

//Smallest digit in a number

// #include<stdio.h>
// int main(){
//     int num,digit,small;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     while(num != 0){
//         digit = num%10;
//         num = num/10;
//         if(digit<small){
//             small = digit;
//         }
//     }
//     printf("The smallest digit in the number: %d\n",small);
//     return 0;
// }

//Reverse number & check divisibility by 3

// #include<stdio.h>
// int main(){
//     int num,digit,rev,div;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     rev = 0;
//     while(num!=0){
//         digit = num%10;
//         num = num/10;
//         rev = rev*10 + digit;
//     }
//     if(rev%3 == 0){
//         div = rev/3;
//         printf("The reversed number is divisible by 3.\n(%d)/3 = %d",rev,div);
//     }
//     return 0;
// }

//Fibonacci series (while loop) , 3rd number is the addition of first 2 numbers..

// #include<stdio.h>
// int main(){
//     int a ,b ,next,n;
//     printf("enter 1st number: ");
//     scanf("%d",&a);
//     printf("enter 2st number: ");
//     scanf("%d",&b);
//     printf("series continue for number n: ");
//     scanf("%d",&n);
//     while(n > 0){
//         printf(" %d ",a);
//         next = a + b;
//         a = b;
//         b = next;
//         n--;
//     }
//     return 0;
// }

//Power without pow()

// #include<stdio.h>
// int main(){
//     int num , power , output;
//     output = 1;
//     printf("please enter the number: ");
//     scanf("%d",&num);
//     printf("please enter the power of the number: ");
//     scanf("%d",&power);
//     while(power > 0){
//         output = output*num;
//         power--;
//     }
//     printf("%d",output);
//     return 0;
// }

//armstrong number, sum of each digit raised to power(the no. of digit) == org_no.

// #include<stdio.h>
// int main(){
//     int num,count,last_digit,sum,digit,org_num,power;
//     count = 0;
//     sum = 0;
//     printf("Please enter the number: ");
//     scanf("%d",&num);
//     org_num = num;
//     while(num != 0){
//         num = num/10;
//         count = count+1;
//     }
//     num = org_num;
//     while(num != 0){
//         power = count;
//         digit = 1;
//         last_digit = num%10;
//         num = num/10;
//         while(power>0){
//             digit = digit*last_digit;
//             power--;
//         }sum = sum+digit;
//     }
//     if(sum == org_num){
//         printf("The entered number is a Armstrong number.");
//     }else{
//         printf("The entered number is not a armstrong number.");
//     }
// }

//decimal to binary...












