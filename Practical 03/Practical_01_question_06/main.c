#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sname[20];
    int byear,age;

    printf("Enter student name here : ");
    scanf("%s",&sname);

    printf("Enter student's birth year here :" );
    scanf("%d",&byear);

    age=2023-byear;

    printf("\n\n\nStudent's name is %s\n",sname);
    printf("Student's age is %d\n",age);



    return 0;
}
