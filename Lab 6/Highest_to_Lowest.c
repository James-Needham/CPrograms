/* James Needham */
/* 3 November 2020 */
/*Sort Highest to Lowest Q2 (Lab 6)*/
#include <stdio.h>

int main(void)
{
    
    double w, x, y, z;
    double temp;


    scanf("%lf%lf%lf%lf",&w,&x,&y,&z);

    if(w < z)
    {
        temp = w;
        w = z;
        z = temp;
    }

    else if(z > x)
    {
        temp = z;
        z = x;
        x = temp;
    }

    else if(z > w)
    {
        temp = z;
        z = w;
        w = temp;
    }

    

    if(z > x)
    {
        temp = x;
        x = z;
        z = temp;
    }

    if(z > y)
    {
        temp = y;
        y = z;
        z = temp;
    }


    
    printf("%f %f %f %f\n",w, x, y, z);

    return 0;
}