#include<stdio.h>
#include<math.h>
int main(){
    
    int choice;
    float weight_kg, height_cm, result, weight_lbs, height_ft, height_in;
    
    while(choice != 3){
        printf("=====MENU=====\n");
        printf("[1] Metric\n");
        printf("[2] Standard\n");
        printf("[3] Exit\n");
        
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Enter weight in kilograms: ");
            scanf("%f", &weight_kg);
            printf("Enter height in centimeters: ");
            scanf("%f", &height_cm);

            result = (weight_kg)/(pow((height_cm/100),2));
            printf("Your BMI is: %f \n", result);

            if (result < 18.5){
                printf("BMI Category: Underweight\n");
            } else if(result < 25){
                printf("BMI Category: Normal Weight\n");
            } else if(result < 30){
                printf("BMI Category: Overweight\n");
            } else{
                printf("BMI Category: Obese\n");
            }
            break;

            case 2:
            printf("Enter weight in pounds: ");
            scanf("%f", &weight_lbs);
            printf("Enter height in feet: ");
            scanf("%f", &height_ft);
            printf("Enter height in inches: ");
            scanf("%f", &height_in);

            float total_inches = (height_ft*12) + height_in;
            result = (weight_lbs/pow(total_inches,2)) * 703;

            printf("Your BMI is: %f\n", result);
            if (result < 18.5){
                printf("BMI Category: Underweight\n");
            } else if(result < 25){
                printf("BMI Category: Normal Weight\n");
            } else if(result < 30){
                printf("BMI Category: Overweight\n");
            } else{
                printf("BMI Category: Obese\n");
            }
            break;

            case 3:
            printf("Program Terminated.");
            break;

            default:
            printf("Invalid Choice.");


        }
    }
    
    
}
