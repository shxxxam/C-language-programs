//Program to print multiplication tables according to user's choice
#include <stdio.h>
void PrintTable(int *mulTable , int num, int n ){

    printf("The Table of %d is:\n",num); ;
    for(int i=0; i<n; i++){
        mulTable[i]= num*(i+1);
    }
    for(int i =0; i<n; i++){
        printf("%d x %d is: %d\n",num, i+1,mulTable[i]);
    }
    printf("*****************************************\n\n");

}
void PrintTable(int *mulTable , int num, int n );

int main()
{
    int tb;
    int a=0,b=0,d;
    printf("How many tables you want to print?\n");
    scanf("%d", &a);
    printf("Upto how many values you want to print the table?\n");
    scanf("%d", &b);

    int mulTable[a][b]; //Don't know how to make this line error free :)
        for(int j=0 ; j<a; j++){
            printf("Which table you want to print %d?:", j+1);
            scanf("%d",&tb);
            PrintTable(mulTable[j], tb,b);
        }

    return 0;

}