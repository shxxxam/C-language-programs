// Program to recieve an integer and find its octal value.
#include <stdio.h>
#include <math.h>

int main()
{
    int num,i=0,octal=0,dupnum;
    printf("Enter a number:");
    scanf("%d", &num);
    dupnum = num;
    while(num>0){
        int rem = num % 8;
        num = num/8;
        octal = octal + rem*pow(10,i);
        i++;
        // printf("The Octal is : %d",octal);
    }
    printf("The Octal Equivalent of %d is %d\n", dupnum, octal);
    return 0;
}