#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int SnakeWaterGun(char you , char comp){
    /* 
    This function returns 1 if you wins , returns -1 if you lose and returns 0 if match draws.
    (returns 404 if there is any invalid input from user)
    */
   //Draw conditions
    if(you == comp){
        return 0;
    }
    //Non-draw conditions
    else if(you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 's' && comp == 'g'){
        return -1;
    }
    else if(you == 'w' && comp == 'g'){
        return 1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }
    else if(you == 'g' && comp == 's'){
        return 1;
    }
    else if(you == 'g' && comp == 'w'){
        return -1;
    }
    //Error condition
    else{
        return 404;
    }
}

int main()
{
    char you, comp;

    //Randon number generator (Between 1 to 100)
    srand(time(0));
    int number = rand()%100 + 1;

    if(number <= 33){
        comp = 's';
    }
    else if(number > 33 && number <=66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    
    printf("Enter 's' for snake, 'w' for water and 'g' for gun:\n");
    scanf("%c", &you);
    int result = SnakeWaterGun(you , comp);
    printf("You chose '%c' and computer chose '%c':", you,comp);
    if(result == 0){
        printf("Game Draw.\n");
    }
    else if(result == 1){
        printf("Congratulations! You win.\n");
    }
    else if(result == -1){
        printf("You lose \nBetter luck next time.\n");
    }
    else{
        printf("Please Enter a valid input.\n");
    }

    return 0;
}