#include <stdio.h>
int main(){
    float celsius, fahrenhait;
    int choice;

    printf("===== Temperature Converter =====\n");
    printf("1. celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2):");
    scanf("%d", &choice);

    switch(choice){

        case 1:
        printf("Enter temperature in Fahrenheit:");
        scanf("%f",&fahrenhait);
        celsius =(fahrenhait - 32)* 5/9;
        printf("Temperature in celsius:%.2f\n", celsius);
        break;

        case 2:
        printf("Enter tamperature in celsius:");
        scanf("%f", &celsius);
        fahrenhait = (celsius * 5/9);
        printf("Temperature in Celsius: %.2f\n",celsius);
        break;
        

        default:
            printf("Invalid choice !Please run the program again.\n");
    } 

    return 0;



    }










