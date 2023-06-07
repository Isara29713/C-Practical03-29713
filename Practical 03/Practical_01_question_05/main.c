#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, avg;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the average
    avg = (num1 + num2) / 2;

    // Display the average
    printf("The average is: %.2f\n", avg);

    return 0;
}
