#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        n = n * factorial(n-1);
    }
}
int main(){
    int num;
    printf("please enter the number you want factorial of: ");
    scanf("%d",&num);
    int result = factorial(num);
    printf("The factorial of the number: %d",result);
}
