// Program to classify numbers as positive, negative and zeros entered till user's want.
#include <stdio.h>

int main()
{
    int num;
    int zero = 0, positive =0, negative =0, total =0;
    int response;
    do{
        printf("Enter a number?\n");
        scanf("%d",&num);
        if(num ==0){
            zero++;
        }
        else if(num>0){
            positive++;
        }
        else if(num < 0){
            negative++;
        }
        printf("Do you want to continue?\n yes = 1/no = 0?\n");
        scanf("%d",&response);
        total ++;
    } while(response == 1);
    printf("Total numbers entered are/is %d\n",total);
    printf("Total Positive entered are/is %d\n",positive);
    printf("Total Negative entered are/is %d\n",negative);
    printf("Total zeros entered are/is %d\n",zero);

    return 0;
}