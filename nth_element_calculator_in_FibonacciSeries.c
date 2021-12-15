//Program using recursion to calculate the nth element of the Fibonacci series
#include <stdio.h>
int fibonacci(int a);
int main()
{
    int n;
    printf("Enter the nth element of Fibonacci Series\n");
    scanf("%d",&n);
    printf("The %d term of Fibonacci series is %d", n , fibonacci(n));
    return 0;
}
int fibonacci(int a){
    if (a>2){
        return fibonacci(a-1) + fibonacci(a-2);
    }
    else if (a==1){
        return 0;
    }
    else if (a==2){
        return 1;
    }

}