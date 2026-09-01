/*Zion Joseph S. Busto
2025-05747
CMSC 21 - UV1L
*/
#include <stdio.h>
float recursion(float, float, int); //prototype
int main() {

   int choice, years;
   float population, rate, result;
   do{//run the menu at least once
    printf("============================\n");
    printf("Population Growth Calculator\n");
    printf("[1] Compute\n");
    printf("[2] Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch(choice){
        case 2:
        printf("Program Terminated.\n");
        break;

        case 1:
        printf("Enter population (n): ");
        scanf("%f", &population);
        printf("Growth rate (y%%): ");
        scanf("%f", &rate);
        printf("Years (x): ");
        scanf("%d", &years);
        result = recursion(population, rate/100.0, years);//rate/100.0 since the user will input the rate in percentage
        //i'll use 2 decimal places in the output;
        printf("After %d year(s) at %.2f%% growth rate, the population will be %.2f\n", years, rate, result);
        break;

        default:
        printf("Invalid Choice.\n");
    }


   } while(choice != 2);


    printf("\n");
    return 0;
}

float recursion(float population, float rate, int years){
    if (years == 0){
        return population; // base case. logically makes sense since there is 0 years
    } else{
        float n = population;
        return recursion(n + (n * rate), rate, years - 1);//loop until it reaches thr base case by subtracting 1 every time
    }
}
