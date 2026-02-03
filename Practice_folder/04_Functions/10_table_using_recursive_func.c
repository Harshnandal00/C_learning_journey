#include<stdio.h>
void table(int n,int i){
    if(i>10){
        return;
    }
    else{
        printf("%d x %d = %d\n",n,i,n*i);
    }table(n,i+1);
}
int main(){
    int n;
    printf("please enter the number: ");
    scanf("%d",&n);
    printf("The table of the number %d :\n",n);
    table(n,1);
    return 0;
}
