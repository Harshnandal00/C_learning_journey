#include<stdio.h>
#include<string.h>
union studentData
{
    int attendence;
    float fees;
    char name[13];
};


int main(){
    union studentData s1;
    s1.attendence = 39;
    strcpy(s1.name , "Harsh Nandal");
    printf("%s\n",s1.name);
    printf("attendence = %d\n",s1.attendence);
    printf("%s\n",s1.name); // printing garbage value because now memory is being used by the s1.attendence as it is declared very recently...!
    return 0;
}
