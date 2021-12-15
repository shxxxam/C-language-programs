//  Program that converts RGB color to CMYK color:
#include <stdio.h>
// #include <math.h>

int main()
{
    float r , g , b ;
    printf("This program converts RGB color to CMYK color\n");
    printf("Enter the value of Red color:");
    scanf("%f", &r);
    printf("Enter the value of Green color:");
    scanf("%f", &g);
    printf("Enter the value of Blue color:");
    scanf("%f", &b);
    float x,w,z;
    x = r/255 ;
    w = g/255;
    z = b/255;
    float white;
    // float white = fmaxf(r/255 , g/255 , b/255); //currently not working
    if(x > w && x > z){
        white = x;
    }
    if(w > x && w > z){
        white = w;
    }
    if(z > w && z > x){
        white = x;
    }
    if( r==0 && g==0 && b ==0){
        printf(" Value of Cyan(C) , Magenta(M) and Yellow(Y) are all 0\n Value of Black(K) is 1");
    }
    else{
        white = x;
        float c , m , y , k;
        c = (white - r/255)/white;
        m = (white - g/255)/white;
        y = (white - b/255)/white;
        k = 1-white;
        printf("The value of Cyan: %f \n", c);
        printf("The value of Magenta: %f \n", m);
        printf("The value of Yellow: %f \n", y);
        printf("The value of Black: %f \n", k);
    }   


    return 0;
}