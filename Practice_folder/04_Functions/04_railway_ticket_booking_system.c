#include<stdio.h>

int calculate_total_passanger(int a,int b,int c,int d,int e){
    int total = 0;
    total = a+b+c+d+e;
    return total;
}


int main(){
    //how many passangers and how many types of pasangers info:

    int adult,senior,children,infant,teen;

    printf("please enter the passangers: \n");
    printf("Number of adult(18-50): ");
    scanf("%d",&adult);
    printf("Number of senior citizen(50+): ");
    scanf("%d",&senior);
    printf("Number of teens(13-18): ");
    scanf("%d",&teen);
    printf("Number of children(3-13): ");
    scanf("%d",&children);
    printf("Number of infants(0-3): ");
    scanf("%d",&infant);

    int total_passanger= calculate_total_passanger(senior,adult,teen,children,infant);

    printf("The total number of passangers = %d\n",total_passanger);

    //which passanger will choose which type of seat:

    int general,sleeper,ac,total;

    printf("Ticket Price according to class:\n1. General (Base price) = ₹5000.\n2. Sleeper (Base price) = ₹8000.\n3. AC (Base price) = ₹15000.\n");
    printf("Please select your seat class:\n");


    return 0;
}

//TEMPERORY BREAK FOR ABOVE PROBLEM.//


//chatgpt generated railway ticket booking system>>>>

// #include <stdio.h>

// // Function to calculate total passengers
// int calculate_total_passenger(int adult, int senior, int teen, int child, int infant){
//     return adult + senior + teen + child + infant;
// }

// // Function to assign passengers to classes
// // passenger_counts[]: array of total per type (adult, senior, teen, child, infant)
// // passenger_class[][]: 2D array to store allocation
// void assign_classes(int passenger_counts[5], int passenger_class[5][3]){
//     char *passenger_names[5] = {"Adult", "Senior", "Teen", "Child", "Infant"};
//     char *class_names[3] = {"General", "Sleeper", "AC"};

//     for(int i = 0; i < 5; i++){ // Loop over passenger types
//         int remaining = passenger_counts[i]; // total passengers of this type

//         for(int j = 0; j < 3; j++){ // Loop over classes
//             int temp;
//             if(j == 2){
//                 // Last class gets the remaining passengers
//                 temp = remaining;
//                 printf("%d %s will be assigned to %s class automatically.\n", temp, passenger_names[i], class_names[j]);
//             } else {
//                 do {
//                     printf("Enter number of %s in %s class (remaining %d): ", passenger_names[i], class_names[j], remaining);
//                     scanf("%d", &temp);
//                     if(temp < 0 || temp > remaining){
//                         printf("Invalid input! Must be between 0 and %d.\n", remaining);
//                     }
//                 } while(temp < 0 || temp > remaining);
//             }
//             passenger_class[i][j] = temp;
//             remaining -= temp; // subtract assigned passengers
//         }
//     }
// }

// // Skeleton function: calculate total ticket price
// int calculate_ticket_price(int passenger_class[5][3]){
//     // TODO: multiply by base prices for each class and passenger type adjustments
//     int total = 0;
//     return total;
// }

// // Skeleton function: calculate discounts
// int calculate_discount(int passenger_class[5][3], int total_price){
//     // TODO: apply senior discount, infant free tickets, group discounts
//     int discount = 0;
//     return discount;
// }

// // Skeleton function: print summary
// void print_summary(int passenger_class[5][3], int total_price, int discount){
//     // TODO: print table with passenger distribution, total price, discount, final price
// }

// int main(){
//     // Step 1: Input total passengers
//     int adult, senior, teen, child, infant;
//     printf("Enter number of Adult(18-50): "); scanf("%d", &adult);
//     printf("Enter number of Senior(50+): "); scanf("%d", &senior);
//     printf("Enter number of Teen(13-18): "); scanf("%d", &teen);
//     printf("Enter number of Child(3-13): "); scanf("%d", &child);
//     printf("Enter number of Infant(0-3): "); scanf("%d", &infant);

//     int total_passengers = calculate_total_passenger(adult, senior, teen, child, infant);
//     printf("Total passengers = %d\n", total_passengers);

//     // Step 2: Assign passengers to classes
//     int passenger_counts[5] = {adult, senior, teen, child, infant};
//     int passenger_class[5][3]; // 5 passenger types x 3 classes

//     assign_classes(passenger_counts, passenger_class);

//     // Step 3: Calculate ticket price
//     int total_price = calculate_ticket_price(passenger_class);

//     // Step 4: Calculate discount
//     int discount = calculate_discount(passenger_class, total_price);

//     // Step 5: Print summary
//     print_summary(passenger_class, total_price, discount);

//     return 0;
// }



