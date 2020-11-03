/* James Needham */ 
/* 2 November 2020*/
/* Q1 Minimum Value */

/* Add the necessary C libraries */
#include <stdio.h>

int main(void) {
    
    double w, x, y, z;
    double min;  /* the variable to hold the minimum value */
    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
    
    /* Use if statements so that the minmum value will be the output of the four variables w, x, y and z */
    if (w <= x && w <= y && w <= z)
    {
        min = w;
    }

    else if(x <= w && x <= y && x <= z)
    {
        min = x;
    }

    else if(y <= w && y <= x && y <= z)
    {
        min = y;
    }

    else if(z <= w && z <= x && z <= y)
    {
        min = z;
    }
    
    


    /* Do not change the following output statement */
    /* Print the minimum value */
    printf("%f\n",min);

    /* End the program */
    return 0;
}
    