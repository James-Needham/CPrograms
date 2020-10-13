#include <stdio.h>

int main(void)
{
    double pi;
    double r;
    double volume;

    pi = 3.14159;

    printf("Please enter the radius of the sphere:\n");
    scanf("%lf", &r);

    volume = pi*(r*r*r)*4/3;

    printf("The volume is %lf", volume);
    
    return 0;
}


