// #include<stdio.h>
// void oddNo(int n,int i){
//     if(n>i){
//         return;
//     }
//     if(n%2!=0){
//         printf("%d\n",n);
//     }
//     oddNo(n+1,i);
// }
// int main(){
//     int start ,end;
//     printf("please enter starting number: ");
//     scanf("%d",&start);
//     printf("please enter the ending number: ");
//     scanf("%d",&end);
//     printf("ODD Number from %d to %d is: \n",start,end);
//     oddNo(start,end);
//     return 0;
// }

//ODD NUMBER IN REVERSE .......

#include<stdio.h>
void oddNo(int n,int i){
    if(n<i){
        printf("please enter values in correct order: ");
        return;
    }
    if(n%2!=0){
        printf("%d\n",n);
    }
    oddNo(n-1,i);
}
int main(){
    int start ,end;
    printf("To print numbers in reverse order fill out this:\n");
    printf("please enter starting number(larger): ");
    scanf("%d",&start);
    printf("please enter the ending number(smaller): ");
    scanf("%d",&end);
    printf("ODD Number from %d to %d is: \n",start,end);
    oddNo(start,end);
    return 0;
}
