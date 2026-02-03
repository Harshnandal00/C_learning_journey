#include<stdio.h>
int sumDigit(int n){
    if(n<=0){
        return 0;
    }else{
        int temp = n%10;
        int sum = temp;
        return sum + sumDigit(n/10);
    }
}
int main(){
    int num;
    printf("please enter the value of the number: ");
    scanf("%d",&num);
    printf("total sum of all digits in number: %d",sumDigit(num));
    return 0;
}
