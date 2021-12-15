//Program to calculate income tax to be paid by an employee to the government
#include <stdio.h>

int main()
{
    float income;
    printf("Enter your annual salary in lacs\n");
    scanf("%f", &income);
    float tax = income/100;
    if(income <= 2.5)
    {
        printf("Your Income tax is 0");
    }
    else if (2.5 < income && income<=5)
    {
        printf("Your Income tax is %f lacs", 5* (tax-0.025));
    }
    else if (5 < income && income<=10)
    {
        printf("Your Income tax is %f lacs", 20* (tax-0.05));
    }
    else if (10 < income)
    {
        printf("Your Income tax is %f lacs", 30* (tax-0.1));
    }
    return 0;
}