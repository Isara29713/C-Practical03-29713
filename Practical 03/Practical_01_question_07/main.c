#include <stdio.h>
#include <stdlib.h>

int main()
{
        float num1, num2, temp;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Display the numbers before the swap
    printf("Before swap: num1 = %.2f, num2 = %.2f\n", num1, num2);

    // Swap the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the numbers after the swap
    printf("After swap: num1 = %.2f, num2 = %.2f\n", num1, num2);

    return 0;
}

