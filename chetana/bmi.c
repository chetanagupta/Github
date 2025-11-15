#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter height (in meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("You are Underweight");
    else if (bmi >= 18.5 && bmi < 25)
        printf("You have Normal weight");
    else if (bmi >= 25 && bmi < 30)
        printf("You are Overweight");
    else
        printf("You are Obese");

    return 0;
}
