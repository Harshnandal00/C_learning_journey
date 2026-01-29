#include<stdio.h>

int passangers(int a,int b,int c,int d){
    return a+b+c+d;
}

int total_ticket_price(int a,int b, int c, int d){
    return a*100000 + b*100000 + c*50000 + d*20000;
}

int bag_price(){
    int bag_no;
    printf("please enter the total no. of bags: ");
    scanf("%d",&bag_no);
    int bag_weight[bag_no];
    printf("please enter the weight of each bag: ");
    for(int i = 0;i<bag_no;i++){
        scanf("%d",&bag_weight[i]);
    }
    int price = 0;
    for(int i=0;i<bag_no;i++){
        if(bag_weight[i]>30){
            bag_weight[i] = bag_weight[i] - 30;
            price = price + bag_weight[i]*2000;
        }
    }
    return price;
}

int main(){
    int total_passanger,adult,teen,infant,child;
    int total_bag_price;
    printf("please enter the no. of passangers: \n");
    printf("no. of adults: ");
    scanf("%d",&adult);
    printf("no. of teen: ");
    scanf("%d",&teen);
    printf("no. of child: ");
    scanf("%d",&child);
    printf("no. of infant: ");
    scanf("%d",&infant);
    total_passanger = passangers(adult,teen,infant,child);
    printf("The total no. of passanger is: %d\n",total_passanger);
    int total_price = total_ticket_price(adult,teen,child,infant);
    printf("The total ticket price for all passangers: %d\n",total_price);
    int baggage_price = bag_price();
    printf("total price for extra luggage: %d\n",baggage_price);
    int total_flight_cost = total_price+baggage_price;
    printf("The total flight cost will be: %d\n",total_flight_cost);
    return 0;
}
