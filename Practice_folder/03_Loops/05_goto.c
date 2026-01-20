#include<stdio.h>
int main(){
    int n,sq;
    printf("please enter a no. = ");
    scanf("%d",&n);
    check:
        if(n%2!=0){
            printf("please enter an even no.");
            scanf("%d",&n);
            goto check;
        }else{
            sq = n*n;
            printf("sq of no is: %d",sq);
        }
    return 0;
}
