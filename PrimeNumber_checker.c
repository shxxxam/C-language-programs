//Program to check whether a given number is prime or not
#include <stdio.h>

int main()
{
    int n,i=2,remainder,culprit;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(i<n){
        remainder = n % i;
        i++;
        if(remainder==0){
            culprit =0;
            break;
        }
    }
    if(culprit==0){
        printf("%d is not a prime number", n);
    }
    else if(n==1){
        printf("You have entered 1, don't you know 1 is 1 that is not a prime number.");
    }
    else if (n==0){
        printf("Don't be oversmart!, Please enter a valid input");
    }
    else
    {
        printf("%d is a prime number", n);
    }
    
    return 0;
}