#include<stdio.h>
int power(int base,int exp){
    if(exp == 0){
        return 1;
    }
    else{
        base = base*power(base,exp-1);
    }
}
int main(){
    int base,exp;
    printf("please enter the number: ");
    scanf("%d",&base);
    printf("please enter the exponent of the number: ");
    scanf("%d",&exp);
    printf("The answer is: %d",power(base,exp));
    return 0;
}
