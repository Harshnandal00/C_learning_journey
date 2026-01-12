//=========problem 1===========

// #include<stdio.h>
// int main(){
    //     int value;
    //     printf("enter any number btw 1 to 7 = ");
    //     scanf("%d",&value);
    //     switch (value){
        //     case 1: printf("monday");
        //     break;
        //     case 2: printf("tuesday");
        //     break;
        //     case 3: printf("wednesday");
        //     break;
        //     case 4: printf("thrusday");
        //     break;
        //     case 5: printf("friday");
        //     break;
        //     case 6: printf("saturday");
        //     break;
        //     case 7: printf("sunday");
        //     break;
        //     default: printf("you have entered incorrect case");
        //     break;
        //     }
        //     return 0;
        // }
        
        
//=========problem 2===========
        
// #include<stdio.h>
        // int main(){
            //     char value;
            //     printf("enter any capital alphabet between A to G: ");
            //     scanf("%c",&value);
            //     switch (value){
                //     case 'A': printf("monday");
                //     break;
                //     case 'B': printf("tuesday");
                //     break;
                //     case 'C': printf("wednesday");
                //     break;
                //     case 'D': printf("thrusday");
                //     break;
                //     case 'E': printf("friday");
                //     break;
                //     case 'F': printf("saturday");
                //     break;
                //     case 'G': printf("sunday");
                //     break;
                //     default: printf("you have entered incorrect case");
                //     break;
                //     }
                //     return 0;
                // }
                
                
//=========problem 3===========
                
// #include<stdio.h>
                // int main(){
                    //     float num1,num2;
                    //     char op_sign;
                    //     printf("please enter the 1st number: ");
                    //     scanf("%f",&num1);
                    //     printf("please enter the 2nd number:");
                    //     scanf("%f",&num2);
                    //     printf("please enter the operation sign.");
                    //     scanf(" %c",&op_sign);
                    //     switch (op_sign){
                        //     case '+':
                        //         printf("addition is %f",num1+num2);
                        //         break;
                        //     case '-':
                        //         printf("subtraction of the 2 numbers is: %f",num1 - num2);
                        //         break;
                        //     case '*':
                        //         printf("multiplication of the 2 numbers is: %f",num1 * num2);
                        //         break;
                        //     case '/':
                        //         printf("division of the 2 numbers is: %f",num1 / num2);
                        //         break;
                        //     // case '%':
                        //     //     printf("remainder of the 2 numbers is: %f", num1 % num2);
                        //     //     break;
                        //     default:
                        //         printf("invalid input!\nPlease try again.");
                        //         break;
                        //     }
                        // }
                        
                        
//=========problem 4===========
                        
// #include<stdio.h>
// int main(){
    //     int total_amount,current_pin,new_pin,check_pin;
    //     float withdraw_amount;
    //     char option;
    //     total_amount = 100000;
    //     printf("Please enter your card pin: ");
    //     scanf("%d",&current_pin);
    //     if(current_pin == 9870){
        //         printf("enter option 'a' for cash withdrawl\nenter option 'b' for check_balance\nenter option 'c' for change_pin\n");
        //         printf("Please enter the option you want to select: ");
        //         scanf(" %c",&option);
        //         switch (option)
        //         {
            //         case 'a':
            //             printf("plese enter the amount you want to withdraw: ");
            //             scanf("%f",&withdraw_amount);
            //             if(withdraw_amount<=total_amount && withdraw_amount > 0){
                //                 total_amount -= withdraw_amount;
                //                 printf("withdraw successful!\nbalance_left = %d",total_amount);
                //             }else{
                    //                 printf("withdraw failed!\nplease enter a valid amount.");
                    //             }
                    //             break;
                    //         case 'b':
                    //             printf("You total balance left in account = %.2f",total_amount);
                    //             break;
                    //         case 'c':
                    //             printf("please enter your current pin first: ");
                    //             scanf("%d",&check_pin);
                    //             if(check_pin == current_pin){
                        //                 printf("please enter your new pin: ");
                        //                 scanf("%d",&new_pin);
                        //                 printf("pin change successful!\nNow this is your current pin.");
                        //                 current_pin = new_pin;
                        //             }else{
                            //                 printf("Wrong pin entered.\nPlease enter your correct pin: %d",current_pin);
                            //             }
                            //             break;
                            //         default:
                            //             printf("Invalid input!\nplease choose a correct option!");
                            //             break;
                            //         }
                            //     }else{
                                //         printf("please enter your correct pin.");
                                //     }
                                //     return 0;
                                // }
                                             
//=========problem 5===========

// #include <stdio.h>
// int main()
// {
//     int integer;
//     float eng, hindi, math, science, ss, percent, sum;
//     printf("please enter your english marks: ");
//     scanf("%f", &eng);
//     printf("please enter your hindi marks: ");
//     scanf("%f", &hindi);
//     printf("please enter your maths marks: ");
//     scanf("%f", &math);
//     printf("please enter your science marks: ");
//     scanf("%f", &science);
//     printf("please enter your social science marks: ");
//     scanf("%f", &ss);
//     sum = eng + hindi + math + science + ss;
//     percent = (sum * 100) / 500;
//     if (percent<= 100 || percent>=90)
//     {
//         integer = 1;
//     }
//     else if (percent <= 89 || percent >= 80)
//     {
//         integer = 2;
//     }
//     else if (percent <= 79 || percent >= 70)
//     {
//         integer = 3;
//     }
//     else if (percent <= 69 || percent >= 60)
//     {
//         integer = 4;
//     }
//     switch (integer)
//     {
//     case 1:
//             printf("Grade A+");
//         break;
//     case 2:
//             printf("Grade A");
//         break;
//     case 3:
//             printf("Grade B+");
//         break;
//     case 4:
//             printf("Grade B");
//         break;
//     default:
//         printf("Grade F");
//         break;
//     }
//     return 0;
// }

//=========problem 6===========

// #include <stdio.h>
// int main()
// {
//     int st_id, main_choice, sub_choice_1, sub_choice_2, sub_choice_3, sub_choice_4, sub_choice_5;
//     char depart;
//     float percentage, fee_amount;
//     printf("Please enter your student ID: ");
//     scanf("%d", &st_id);
//     if(st_id >=100 && st_id<110)
//     {
//         printf("Please enter your department.\n'C' for Computer Science.\n'E' for Electronics.\n'M' for Mechanical.\nYour department = ");
//         scanf(" %c", &depart);
//         if (depart == 'C' || depart == 'E' || depart == 'M' || depart == 'c' || depart == 'e' || depart == 'm')
//         {
//             printf("1 for Academic Information.\n2 for Fee Management.\n3 for Hostel Services.\n4 for Library Services.\n5 for Student Help Desk.\nPlease enter your choice: ");
//             scanf("%d", &main_choice);
//             switch (main_choice)
//             {
//             case 1:
//                 printf("'1' for View Semester Subjects.\n'2' for View Exam Result Status\n'3' for View Attendence Policy.\nPlease enter your choice = ");
//                 scanf("%d", &sub_choice_1);
//                 if (sub_choice_1 == 1 || sub_choice_1 == 2 || sub_choice_1 == 3)
//                 {
//                     if (depart == 'C' || depart == 'c')
//                     {
//                         if (sub_choice_1 == 1)
//                         {
//                             printf("1. C Programming\n2. Data Structures\n3. Discrete Mathematics\n4. Computer Organization\n");
//                         }
//                         else if (sub_choice_1 == 2)
//                         {
//                             printf("Please enter your percentage: ");
//                             scanf("%f", &percentage);
//                             if (percentage >= 75)
//                             {
//                                 printf("Distinction\n");
//                             }
//                             else if (percentage < 75 && percentage >= 60)
//                             {
//                                 printf("First Class\n");
//                             }
//                             else if (percentage < 60 && percentage >= 49)
//                             {
//                                 printf("Pass\n");
//                             }
//                             else
//                             {
//                                 printf("Fail\n");
//                             }
//                         }
//                         else
//                         {
//                             printf("Minimum Attendence requirement: 75%%\n");
//                         }
//                     }
//                     else if (depart == 'E' || depart == 'e')
//                     {
//                             if (sub_choice_1 == 1)
//                             {
//                                 printf("1. Circuit Theory\n2. Digital Electronics\n3. Signals and Systems\n4. Analog Communication\n");
//                             }
//                             else if (sub_choice_1 == 2)
//                             {
//                                 printf("Please enter your percentage: ");
//                                 scanf("%f", &percentage);
//                                 if (percentage >= 75)
//                                 {
//                                     printf("Distinction\n");
//                                 }
//                                 else if (percentage < 75 && percentage >= 60)
//                                 {
//                                     printf("First Class\n");
//                                 }
//                                 else if (percentage < 60 && percentage >= 49)
//                                 {
//                                     printf("Pass\n");
//                                 }
//                                 else
//                                 {
//                                     printf("Fail\n");
//                                 }
//                             }
//                             else
//                             {
//                                 printf("Minimum Attendence requirement: 80%%\nAttendence below this may lead to exam disqualification.");
//                             }
//                     }
//                     else // depart == 'M'
//                     {
//                         if (sub_choice_1 == 1)
//                         {
//                             printf("1. Engineering Mechanics\n2. Thermodynamics\n3. Manufacturing Processes\n4. Strength of Materials\n");
//                         }
//                         else if (sub_choice_1 == 2)
//                         {
//                             printf("Please enter your percentage: ");
//                             scanf("%f", &percentage);
//                             if (percentage >= 75)
//                             {
//                                 printf("Distinction\n");
//                             }
//                             else if (percentage < 75 && percentage >= 60)
//                             {
//                                 printf("First Class\n");
//                             }
//                             else if (percentage < 60 && percentage >= 49)
//                             {
//                                 printf("Pass\n");
//                             }
//                             else
//                             {
//                                 printf("Fail\n");
//                             }
//                         }
//                         else // sub_choice_1 == 3
//                         {
//                             printf("Minimum Attendence requirement: 70%%\n");
//                         }
//                     }      
//                 }
//                 else
//                     {
//                     printf("Please enter a correct choice.\n");
//                     }
//                 break;
//             case 2:
//                 printf("please enter:\n'1' for View Fee Structure\n'2' for Pay Fees\n'3' for Late Fee Rules.\nYour choice: ");
//                 scanf("%d", &sub_choice_2);
//                 if (sub_choice_2 == 1 || sub_choice_2 == 2 || sub_choice_2 == 3)
//                 {
//                     if (depart == 'C' || depart == 'c')
//                     {
//                         if (sub_choice_2 == 1)
//                         {
//                             printf("Annual Fees for computer science: 85,000.\n");
//                         }
//                         else if (sub_choice_2 == 2)
//                         {
//                             printf("please enter the amount you want to pay: ");
//                             scanf("%f", &fee_amount);
//                             int c_fees = 85000;
//                             if (fee_amount >= c_fees)
//                             {
//                                 printf("Payment successful!\nAmount refundable: %f\n", fee_amount - c_fees);
//                             }
//                             else if (fee_amount < c_fees && fee_amount > 0)
//                             {
//                                 printf("Payment successful!\nAmount pending: %f\n", c_fees - fee_amount);
//                             }
//                             else
//                             {
//                                 printf("please enter a correct amount of money!\n");
//                             }
//                         }
//                         else
//                         {
//                             printf("In C department:\nLate Fee: Rs.100 per week.\n");
//                         }
//                     }
//                     else if (depart == 'E' || depart == 'e')
//                     {
//                         if (sub_choice_2 == 1)
//                         {
//                             printf("Annual Fees for Electronics: 75,000.\n");
//                         }
//                         else if (sub_choice_2 == 2)
//                         {
//                             printf("please enter the amount you want to pay: ");
//                             scanf("%f", &fee_amount);
//                             int e_fees = 75000;
//                             if (fee_amount >= e_fees)
//                             {
//                                 printf("Payment successful!\nAmount refundable: %f\n", fee_amount - e_fees);
//                             }
//                             else if (fee_amount < e_fees && fee_amount > 0)
//                             {
//                                 printf("Payment successful!\nAmount pending: %f\n", e_fees - fee_amount);
//                             }
//                             else
//                             {
//                                 printf("please enter a correct amount of money!\n");
//                             }
//                         }
//                         else
//                         {
//                             printf("In Electronics department:\nLate Fees: Rs150 per week.\n");
//                         }
//                     }
//                     else // depart == 'M'
//                     {
//                         if (sub_choice_2 == 1)
//                         {
//                             printf("Annual Fees for mechanics: 70,000.\n");
//                         }
//                         else if (sub_choice_2 == 2)
//                         {
//                             printf("please enter the amount you want to pay: ");
//                             scanf("%f", &fee_amount);
//                             int m_fees = 70000;
//                             if (fee_amount >= m_fees)
//                             {
//                                 printf("Payment successful!\nAmount refundable: %f\n", fee_amount - m_fees);
//                             }
//                             else if (fee_amount < m_fees && fee_amount > 0)
//                             {
//                                 printf("Payment successful!\nAmount pending: %f\n", m_fees - fee_amount);
//                             }
//                             else
//                             {
//                                 printf("please enter a correct amount of money!\n");
//                             }
//                         }
//                         else
//                         {
//                             printf("Mechanical department:\nLate Fees: Rs80 per week.\n");
//                         }
//                     }
//                 }
//                 else
//                 {
//                     printf("please enter a correct choice\n");
//                 }
//                 break;
//             case 3:
//                 printf("please select an option from below:\n'1' for Room Charges\n'2' for Mess Charges\n'3' for Hostel Rules\nYour Choice: ");
//                 scanf("%d", &sub_choice_3);
//                 if (sub_choice_3 == 1 || sub_choice_3 == 2 || sub_choice_3 == 3)
//                 {
//                     if (sub_choice_3 == 1)
//                     {
//                         printf("Single Room: Rs5000 per month.\nShared Room: Rs3000 per month.\n");
//                     }
//                     else if (sub_choice_3 == 2)
//                     {
//                         printf("Mess Charges: Rs2500 per month.\nIncludes breakfast, lunch, and dinner.\n");
//                     }
//                     else
//                     {
//                         printf("Hostel Rules:\nHostel entry allowed until 10:00 PM\nNo outside visitors inside Hostel\nStrict discipline policy.\n");
//                     }
//                 }
//                 else
//                 {
//                     printf("please enter a correct choice.");
//                 }
//                 break;
//             case 4:
//                 printf("Please select your library sevices:\n'1' for Book Issue Rules\n'2' for Fine Calculation\n'3' for Library Timings\nYour Choice: ");
//                 scanf("%d", &sub_choice_4);
//                 if (sub_choice_4 == 1 || sub_choice_4 == 2 || sub_choice_4 == 3)
//                 {
//                     if (sub_choice_4 == 1)
//                     {
//                         printf("Book Issue Rules:\nMaximum 3 books can be issued at the same time.\nIssue duration: 14 books\nRenewal allowed once.\n");
//                     }
//                     else if (sub_choice_4 == 2)
//                     {
//                         printf("Late Days <= 5\nFine = Rs2 per day.\n");
//                         printf("Late Days 6-10\nFine = Rs5 per day.\n");
//                         printf("Late Days >10\nFine = Rs10 per day.\n");
//                     }
//                     else
//                     {
//                         printf("Monday to Friday: 9:00 AM = 6:00 PM\nSaturday: 9:00 AM - 2:00 PM\nSunday: Closed\n");
//                     }
//                 }
//                 else
//                 {
//                     printf("please enter a correct choice.\n");
//                 }
//                 break;
//             case 5:
//                 printf("Please select your issue:\n'1' for ID Card Issue\n'2' for Scholarship Information\n'3' for Complaint Registration\n'4' for Contact Administration\nYour issue: ");
//                 scanf("%d", &sub_choice_5);
//                 if (sub_choice_5 == 1 || sub_choice_5 == 2 || sub_choice_5 == 3 || sub_choice_5 == 4)
//                 {
//                     if (sub_choice_5 == 1)
//                     {
//                         printf("ID card will be issued within 7 working days.\nTill then Carry admission receipt for verification.\n");
//                     }
//                     else if (sub_choice_5 == 2)
//                     {
//                         printf("Scholarship availabele:\nMerit-based\nNeed-based\nGoverment-funded\n");
//                     }
//                     else if (sub_choice_5 == 3)
//                     {
//                         printf("Your Complaint has been registered successfully.\nReference ID will be sent via email.\n");
//                     }
//                     else
//                     {
//                         printf("Email: admin@college.edu\nPhone: 1234567890\nOffice Hours: 10:00 Am - 4:00 PM.\n");
//                     }
//                 }
//                 else
//                 {
//                     printf("please enter a correct choice.\n");
//                 }
//                 break;
//             default:
//                 printf("Invalid Choice. Please restart the program.\n");
//                 break;
//             }
//         }
//         else
//         {
//             printf("Please enter a valid department code.\nProgram terminated.");
//         }
//     }else{
//         printf("Please enter a valid student id\nIt should be between 100 to 110.");
//     }
//     return 0;
// }

//reduced version of the above code....

// #include <stdio.h>
// int main() {
//     int st_id, main_choice, sub_choice;
//     char depart;
//     float percentage, fee_amount;
//     int fees;
//     printf("Please enter your student ID: ");
//     scanf("%d", &st_id);
//     if (st_id < 100 && st_id > 109) {
//         printf("Please enter a valid student id\nIt should be between 100 to 110.");
//         return 0;
//     }
//     printf("Please enter your department.\n'C' for Computer Science.\n'E' for Electronics.\n'M' for Mechanical.\nYour department = ");
//     scanf(" %c", &depart);
//     if (!(depart=='C'||depart=='c'||depart=='E'||depart=='e'||depart=='M'||depart=='m')) {
//         printf("Please enter a valid department code.\nProgram terminated.");
//         return 0;
//     }
//     printf("1. Academic Info\n2. Fee Management\n3. Hostel Services\n4. Library Services\n5. Student Help Desk\nEnter choice: ");
//     scanf("%d", &main_choice);
//     switch(main_choice) {
//         case 1:  // Academic Info
//             printf("1. View Subjects\n2. Exam Result\n3. Attendance Policy\nEnter choice: ");
//             scanf("%d", &sub_choice);
//             if (sub_choice < 1 || sub_choice > 3) {
//                 printf("Invalid choice.\n");
//                 break;
//             }
//             // Subjects
//             if (sub_choice == 1) {
//                 if (depart=='C'||depart=='c') printf("C Programming, Data Structures, Discrete Math, Computer Organization\n");
//                 else if (depart=='E'||depart=='e') printf("Circuit Theory, Digital Electronics, Signals & Systems, Analog Communication\n");
//                 else printf("Engineering Mechanics, Thermodynamics, Manufacturing Processes, Strength of Materials\n");
//             }
//             // Exam Result
//             else if (sub_choice == 2) {
//                 printf("Enter your percentage: ");
//                 scanf("%f", &percentage);
//                 if (percentage >= 75) printf("Distinction\n");
//                 else if (percentage >= 60) printf("First Class\n");
//                 else if (percentage >= 49) printf("Pass\n");
//                 else printf("Fail\n");
//             }
//             // Attendance Policy
//             else {
//                 if (depart=='C'||depart=='c') printf("Minimum Attendance: 75%%\n");
//                 else if (depart=='E'||depart=='e') printf("Minimum Attendance: 80%%\n");
//                 else printf("Minimum Attendance: 70%%\n");
//             }
//             break;
//         case 2:  // Fee Management
//             printf("1. View Fee\n2. Pay Fee\n3. Late Fee Rules\nEnter choice: ");
//             scanf("%d", &sub_choice);
//             if (sub_choice < 1 || sub_choice > 3) {
//                 printf("Invalid choice.\n");
//                 break;
//             }
//             // Set fees based on department
//             if (depart=='C'||depart=='c') fees = 85000;
//             else if (depart=='E'||depart=='e') fees = 75000;
//             else fees = 70000;
//             if (sub_choice == 1) printf("Annual Fees: %d\n", fees);
//             else if (sub_choice == 2) {
//                 printf("Enter amount to pay: ");
//                 scanf("%f", &fee_amount);
//                 if (fee_amount >= fees) printf("Payment successful! Refund: %f\n", fee_amount - fees);
//                 else if (fee_amount > 0) printf("Payment successful! Pending: %f\n", fees - fee_amount);
//                 else printf("Invalid amount!\n");
//             } else {
//                 if (depart=='C'||depart=='c') printf("Late Fee: Rs.100/week\n");
//                 else if (depart=='E'||depart=='e') printf("Late Fee: Rs.150/week\n");
//                 else printf("Late Fee: Rs.80/week\n");
//             }
//             break;
//         case 3:  // Hostel
//             printf("1. Room Charges\n2. Mess Charges\n3. Hostel Rules\nEnter choice: ");
//             scanf("%d", &sub_choice);
//             if (sub_choice == 1) printf("Single: 5000/month, Shared: 3000/month\n");
//             else if (sub_choice == 2) printf("Mess: 2500/month (includes all meals)\n");
//             else if (sub_choice == 3) printf("Hostel Rules: Entry till 10 PM, No outside visitors, Strict discipline\n");
//             else printf("Invalid choice.\n");
//             break;
//         case 4:  // Library
//             printf("1. Book Rules\n2. Fine Calculation\n3. Library Timings\nEnter choice: ");
//             scanf("%d", &sub_choice);
//             if (sub_choice == 1) printf("Max 3 books, 14 days, 1 renewal allowed\n");
//             else if (sub_choice == 2) printf("Late <=5 days: Rs2/day, 6-10: Rs5/day, >10: Rs10/day\n");
//             else if (sub_choice == 3) printf("Mon-Fri: 9-6, Sat: 9-2, Sun: Closed\n");
//             else printf("Invalid choice.\n");
//             break;
//         case 5:  // Help Desk
//             printf("1. ID Card\n2. Scholarship\n3. Complaint\n4. Contact Admin\nEnter choice: ");
//             scanf("%d", &sub_choice);
//             if (sub_choice == 1) printf("ID card issued in 7 days, carry admission receipt\n");
//             else if (sub_choice == 2) printf("Scholarships: Merit, Need-based, Govt-funded\n");
//             else if (sub_choice == 3) printf("Complaint registered, Reference ID sent via email\n");
//             else if (sub_choice == 4) printf("Email: admin@college.edu, Phone: 1234567890, 10AM-4PM\n");
//             else printf("Invalid choice.\n");
//             break;
//         default:
//             printf("Invalid choice. Restart program.\n");
//     }
//     return 0;
// }

//end of the problems for switch statement......