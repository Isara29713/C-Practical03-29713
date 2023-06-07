#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num01;
   float num02;
   double num03;
   char num04[10];

   printf("Enter an integer value here ");
   scanf("%d",&num01);

   printf("Enter the float value here ");
   scanf("%f",&num02);

   printf("Enter the double value here ");
   scanf("%lf",&num03);

   printf("Enter the char value here ");
   scanf("%s",&num04);

   printf("\n\n\nYour integer value is %d\n",num01);
   printf("Your float value is %f\n",num02);
   printf("Your double value is %lf\n",num03);
   printf("Your char value is %s\n",num04);





    return 0;
}
