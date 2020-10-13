#include <stdio.h>

int main(void)
{
    double length;

    double height;

    double area;

    printf("Please enter the length of the base:\n");

    scanf("%lf", &length);

    printf("Please enter the height:\n");

    scanf("%lf", &height);

    area = (length/2) * height;

    printf("The area is %lf", area); 

    return 0;
}