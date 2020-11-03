/* James Needham */ 
/* 2 November 2020*/


#include <stdio.h>

int main(void)
{
    
    double w, x, y, z;
    double min;  /* the variable to hold the minimum value */
    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */

   
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
    printf("%f\n",min);
    
    return 0;
}