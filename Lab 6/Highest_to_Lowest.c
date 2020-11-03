/* James Needham */
/* 3 November 2020 */
/*Sort Highest to Lowest Q2 (Lab 6)*/

/*Adding the necessary C Libraries*/
#include <stdio.h>

int main(void) {
    
    double w, x, y, z;
    /* you may need some extra variables - but NO arrays please! */
    double temp;
    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
    
    /* Using if statements to sort the values of the four values by temporarily storing one of those values in the variable temp. */
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


    /* Do not change the following output statement */
    /* Outputting the sorted values from highest to lowest */
    printf("%.1f %.1f %.1f %.1f\n",w, x, y, z);

    return 0;
}
    